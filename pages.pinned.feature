@node-1 @javascript @api @MEDSTAT @MEDSTAT-PAGES @MEDSTAT-PAGES-PINNED
Feature: Articles on topic pages load dynamically until an item is pinned.
  In order to have control of the content on a page
  As an editor
  I need to pin content to a specific location on the page.

  Background:
    Given I am logged in as a user with the "content administrator" role
    And Publications terms:
      | name                | field_publication_short_name  | path[alias] | path[pathauto]  |
      | Behat Publication 1 | tp1                           | pub1        | 0               |
      | Behat Publication 2 | tp2                           | pub2        | 0               |

    Given Topics terms:
      | name          | field_allowed_publications  |
      | Behat Topic 1 | Behat Publication 1         |
      | Behat Topic 2 | Behat Publication 1         |

    # Behats creation of this term did not trigger aliases to be rebuilt.
    # Saving the term edit form triggers it.
    When I visit "topics/behat-topic-1"
    And I click "Edit"
    And I press "Save"

    Given I am logged in as a user with the "editor" role
    And Article content:
      | title           | field_article_publications                | field_article_topics  | status  |
      | Behat Article 1 | Behat Publication 1, Behat Publication 2  | Behat Topic 1         | 1       |
      | Behat Article 2 | Behat Publication 2                       | Behat Topic 1         | 1       |
      | Behat Article 3 | Behat Publication 1                       | Behat Topic 2         | 1       |

  Scenario: A topic page is viewed with dynamic and then currated content.
    # Only the first article should show on the page since all population is
    # happening dynamically at this point.
    When I visit "pub1/behat-topic-1"
    Then I should see "Behat Article 1" in the ".featured-content-area" element
    And I should not see "Behat Article 2" in the ".featured-content-area" element
    And I should not see "Behat Article 3" in the ".featured-content-area" element

    # Edit the second slot to pin the second article.
    When I visit "admin/structure/fieldable-panels-panes/view/2/edit"
    Then I should see "Changing this field will impact every topic page on every publication."
    When I select the first autocomplete option for "Behat Article 2" on the "field_item_slot_item[und][0][field_pinned_item_item][und][0][target_id]" field
    And I select "Behat Publication 1" from "field_item_slot_item[und][0][field_pinned_item_publication][und]" chosen.js select box
    And I select the first autocomplete option for "Behat Topic 1" on the "field_item_slot_item[und][0][field_pinned_item_topic][und][0][target_id]" field
    And I press "Save"

    # Both articles should be visible on the page.
    And I visit "pub1/behat-topic-1"
    Then I should see "Behat Article 1" in the ".featured-content-area" element
    And I should see "Behat Article 2" in the ".featured-content-area" element

    # Since we didn't set an expiration date, the default was today. So when we
    # run cron, the "Behat Article 2" pinned item will be deleted.
    Given I run cron
    When I visit "pub1/behat-topic-1"
    Then I should not see "Behat Article 2" in the ".featured-content-area" element

  Scenario: A publication page is viewed with dynamic and then currated content.
    # Only the first and third article should show on the page since all
    # population is happening dynamically at this point.
    When I visit "pub1"
    Then I should see "Behat Article 1" in the ".featured-content-area" element
    And I should see "Behat Article 3" in the ".featured-content-area" element
    And I should not see "Behat Article 2" in the ".featured-content-area" element

    # Edit the second slot to pin the second article.
    When I visit "admin/structure/fieldable-panels-panes/view/2/edit"
    Then I should see "Changing this field will impact every topic page on every publication."
    When I select the first autocomplete option for "Behat Article 2" on the "field_item_slot_item[und][0][field_pinned_item_item][und][0][target_id]" field
    And I select "Behat Publication 1" from "field_item_slot_item[und][0][field_pinned_item_publication][und]" chosen.js select box
    And I press "Save"

    # Both articles should be visible on the page.
    And I visit "pub1"
    Then I should see "Behat Article 1" in the ".featured-content-area" element
    And I should see "Behat Article 2" in the ".featured-content-area" element
    And I should see "Behat Article 3" in the ".featured-content-area" element

    # Since we didn't set an expiration date, the default was today. So when we
    # run cron, the "Behat Article 2" pinned item will be deleted.
    Given I run cron
    When I visit "pub1"
    Then I should not see "Behat Article 2" in the ".featured-content-area" element
