<?php
/**
 * @file
 * Provides app info for openpublic blog.
 */

/**
 * Implements hook_apps_app_info().
 */
function openpublic_breaking_news_apps_app_info() {
  return array(
    'demo content description' => 'Creates sample content to breaking news features.',
    'demo content module' => 'openpublic_breaking_news_demo',
    'permissions' => array(
      'edit any breaking_news entity_boxes' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
      'view any breaking_news entity_boxes' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'staff' => 'staff',
      ),
    ),
  );
}
