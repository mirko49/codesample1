<?php
/**
 * @file
 * MD-IQ Header template.
 */
?>
<div class="mdiq-header"><?php
  if (!empty($image)):
    print $image;
  endif;
  if (!empty($title)):?>
    <h1><?php print $title; ?></h1><?php
  endif;
  if (!empty($content)):
    print $content;
  endif;?>
</div>
