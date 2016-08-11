<?php
/**
 * @file
 * Themes the quiz take summary
 */
?>
<h2>
  <?php print t('Congratulations!'); ?><br/>
  <?php print t("You've completed the quiz on @name", array('@name' => $quiz->title)); ?>
</h2>
<div class="mdiq-score">
  <div class="quiz-score-user">
    <b>
      <?php print t('Your score on this quiz:'); ?>
      <span class="mdiq-score-percentage">
        <?php print t('%score %', array('%score' => $score['percentage_score'])); ?>
      </span>
    </b>
  </div>
  <div class="quiz-score-average"><?php
    print t('Average score on this quiz: %score %', array('%score' => $average_score)); ?>
  </div>
  <?php if (isset($summary['passfail'])): ?>
    <div class="quiz-summary"><?php
      print $summary['passfail'] ?>
    </div>
  <?php endif; ?>
  <?php if (isset($summary['result'])): ?>
  <div class="quiz-summary"><?php
      print $summary['result'] ?>
    </div><?php
endif;?>
</div>
<a href="#mdiq-by-topic" class="call-to-action"><?php print t('Keep going! Take another quiz below'); ?></a>
