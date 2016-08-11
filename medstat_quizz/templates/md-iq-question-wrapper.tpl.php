<?php
/**
 * @file
 * MD-IQ Question Wrapper
 */
if (!empty($content)): ?>
<article class="mdiq-question-wrapper">
  <header>
    <h2><?php print $title; ?></h2>
  </header>
  <div class="mdiq-question-content"><?php
    print $content;?>
  </div>
</article><?php
endif;
