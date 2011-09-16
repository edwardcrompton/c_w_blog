<?php
/**
 * @file
 * c_w_blog.features.inc
 */

/**
 * Implementation of hook_node_info().
 */
function c_w_blog_node_info() {
  $items = array(
    'blog_post' => array(
      'name' => t('Blog Post'),
      'base' => 'node_content',
      'description' => t('A simple blog post'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
