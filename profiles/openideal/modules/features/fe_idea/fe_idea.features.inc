<?php
/**
 * @file
 * fe_idea.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fe_idea_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "radioactivity" && $api == "radioactivity_decay_profile") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function fe_idea_flag_default_flags() {
  $flags = array();
  // Exported flag: "Popular Idea".
  $flags['popular_idea'] = array(
    'content_type' => 'node',
    'title' => 'Popular Idea',
    'global' => '1',
    'types' => array(
      0 => 'idea',
    ),
    'flag_short' => 'Flag as popular idea',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unflag as popular idea',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
      ),
      'unflag' => array(
        0 => '3',
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'fe_idea',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;
}

/**
 * Implements hook_node_info().
 */
function fe_idea_node_info() {
  $items = array(
    'idea' => array(
      'name' => t('Idea'),
      'base' => 'node_content',
      'description' => t('Idea content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
