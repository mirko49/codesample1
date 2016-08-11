<?php
/**
 * @file
 * Themes the medstat question report
 */
?>
<div class="medstat_quiz-report">
  <?php foreach ($form as $key => $sub_form): ?>
    <?php if (is_numeric($key) && !isset($sub_form['#no_report'])) : ?>
      <?php unset($form[$key]); ?>

      <div class="medstat_quiz-report-row clearfix">
        <div class="medstat-quiz-report-question dt">
          <div class="quiz-report-question-header clearfix">
            <h3><?php print render($form['progress']); ?></h3>
          </div>

          <?php if (isset($sub_form['question'])): ?>
            <?php print drupal_render($sub_form['question']); ?>
          <?php endif; ?>
        </div>

        <?php if (isset($sub_form['response'])): ?>
          <div class="quiz-report-response dd">
            <?php print drupal_render($sub_form['response']); ?>
          </div>
        <?php endif; ?>

        <?php if (isset($sub_form['rendered_question_feedback'])): ?>
        <div class="quiz-report-question-feedback dd">
          <h3><?php print t('Explanation'); ?></h3>
          <?php print drupal_render($sub_form['rendered_question_feedback']); ?>
        </div>
        <?php endif; ?>

        <?php if (isset($sub_form['question_reference'])): ?>
        <div class="quiz-report-question-reference dd">
          <p><?php print t('For complete information, see:'); ?></p>
          <?php print drupal_render($sub_form['question_reference']); ?>
        </div>
        <?php endif; ?>

        <div class="quiz-report-score-feedback dd">
          <?php print drupal_render($sub_form['score']); ?>
          <?php print drupal_render($sub_form['answer_feedback']); ?>
        </div>
      </div>
    <?php endif; ?>
  <?php endforeach; ?>

  <div class="quiz-report-quiz-feedback dd">
    <?php if (isset($form['quiz_feedback']) && $form['quiz_feedback']['#markup']): ?>
      <h2><?php print t('Quiz feedback'); ?></h2>
      <?php print drupal_render($form['quiz_feedback']); ?>
    <?php endif; ?>
  </div>
</div>

<div class="quiz-score-submit">
  <?php print drupal_render_children($form); ?>
</div>
