/**
 * @file: Medstat Quizz specific JS behaviors.
 */

/*global Drupal, jQuery, googletag, ga */

(function ($) {
  'use strict';

  Drupal.behaviors.medstatQuizzQuestionnaire = {
    attach: function (context) {
      $('.pane-questionnaire-take', context).once('quizz-processed', function () {
        var $pane = $(this).find('.pane-content');
        $('.pane-md-paged-body, .pane-node-field-references').hide();

        // If this has an empty quiz element, this is an "answer reveal".
        // Add a button to trigger display of the body content.
        if ($('.questionnaire-empty', context).length) {
          $('.questionnaire-empty', context).append(
            $('<input>')
              .attr('type', 'submit')
              .val('Show Answer')
              .click(function (){
                $('.questionnaire-empty', context).slideUp('fast');
                showQuestionnaireContent();
              })
          );

          return;
        }

        // Disable/enable the submit button based on radio button value.
        $pane.find('input[type=radio], .multichoice-row').on('click change', function (){
          setTimeout(function () {
            var hasValue = !!$pane.find('input:checked').val();
            $pane.find('input[type=submit]')
              .prop('disabled', !hasValue)
              .css('opacity', hasValue ? 1 : 0.5);
          }, 10);
        }).change();

        // "Am I correct?" button click.
        $pane.find('input[type=submit]').click(function (e){
          e.preventDefault();

          // Get the chosen answer (if any).
          var answerID = $pane.find('input:checked').val();
          if (answerID) {
            // With a selected answer, try to get the results.
            $.post(Drupal.settings.medstat_quizz.postURL, {
              answer: answerID
            }, function (data){
              // With the data, replace the questionnaire with the results.
              $pane.html(data);

              // Show the rest of the body content.
              showQuestionnaireContent();
            });
          }
        });
      });
    }
  };

  function showQuestionnaireContent() {
    $('.pane-md-paged-body, .pane-node-field-references').slideDown('slow', function (){
      // Refresh the DFP ads and trigger resize to ensure they move correctly
      // once the height changes. Also trigger GA Page view.
      googletag.pubads().refresh();
      $(window).resize();
      ga('send', 'pageview', location.pathname);
    });
  }

})(jQuery);
