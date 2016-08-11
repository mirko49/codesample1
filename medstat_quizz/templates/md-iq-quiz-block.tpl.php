<?php
/**
 * @file
 * MD-IQ Question Wrapper
 */
?>
<?php if(!empty($image)): ?>
<?php print render($image); ?>
<?php endif;?>

<?php if(!empty($taken)): ?>
<p>
  <?php print t("You have taken this quiz already"); ?>
</p>
<?php endif; ?>

<?php if (!empty($content)): ?>
<div class="mdiq-quiz-block mdiq-questions-in-block">
  <div class="mdiq-question-content">
    <?php print render($content); ?>
  </div>
</div>
<?php endif; ?>
