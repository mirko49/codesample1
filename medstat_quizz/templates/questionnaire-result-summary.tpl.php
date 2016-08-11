<?php
/**
 * @file
 * Theme the questionnaire result summary.
 */
?>

<div class="mdiq-question-content questionnaire-results">
  <div class="field-name-body">
    <h2 class="field-item"><?php print $question->title; ?></h2>
  </div>
</div>

<?php foreach ($results as $result): ?>
<div class="mdiq-answer <?php print $result['class']; ?>-answer">
  <?php if (isset($result['response'])): ?>
    <div class="response"><?php print $result['response']; ?></div>
  <?php endif; ?>
  <p>
    <?php if (isset($result['response'])): ?>
      <span class="choice">
        <i class="fa fa-<?php print $result['class'] == 'correct' ? 'check' : 'times'; ?>"></i>
      </span>
    <?php endif; ?>
    <span class="question"><?php print $result['choice']; ?></span>
  </p>
  <p><small>Chosen by <?php print $result['percent']; ?> of respondents.</small></p>
</div>
<?php endforeach; ?>
