<?php
/**
 * @file
 * employee_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function employee_directory_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'employee_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'employee_directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Employee Directory';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'picture' => 'picture',
    'field_empl_fname' => 'field_empl_fname',
    'field_empl_lname' => 'field_empl_lname',
    'field_empl_dept' => 'field_empl_dept',
    'field_office_location' => 'field_office_location',
    'field_empl_title' => 'field_empl_title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_empl_fname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_empl_lname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_empl_dept' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_office_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_empl_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 1;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_empl_fname']['id'] = 'field_empl_fname';
  $handler->display->display_options['fields']['field_empl_fname']['table'] = 'field_data_field_empl_fname';
  $handler->display->display_options['fields']['field_empl_fname']['field'] = 'field_empl_fname';
  $handler->display->display_options['fields']['field_empl_fname']['label'] = '';
  $handler->display->display_options['fields']['field_empl_fname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_empl_fname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_empl_fname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_empl_fname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_empl_fname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_empl_fname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_empl_fname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_empl_fname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_empl_fname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_empl_fname']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_empl_fname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_empl_fname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_empl_fname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_empl_fname']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_empl_fname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_empl_fname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_empl_fname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_empl_fname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_empl_fname']['field_api_classes'] = 0;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_empl_lname']['id'] = 'field_empl_lname';
  $handler->display->display_options['fields']['field_empl_lname']['table'] = 'field_data_field_empl_lname';
  $handler->display->display_options['fields']['field_empl_lname']['field'] = 'field_empl_lname';
  $handler->display->display_options['fields']['field_empl_lname']['label'] = '';
  $handler->display->display_options['fields']['field_empl_lname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_empl_lname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_empl_lname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_empl_lname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_empl_lname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_empl_lname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_empl_lname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_empl_lname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_empl_lname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_empl_lname']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_empl_lname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_empl_lname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_empl_lname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_empl_lname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_empl_lname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_empl_lname']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_empl_lname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_empl_lname']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_empl_lname']['field_api_classes'] = 0;
  /* Field: User: Department */
  $handler->display->display_options['fields']['field_empl_dept']['id'] = 'field_empl_dept';
  $handler->display->display_options['fields']['field_empl_dept']['table'] = 'field_data_field_empl_dept';
  $handler->display->display_options['fields']['field_empl_dept']['field'] = 'field_empl_dept';
  $handler->display->display_options['fields']['field_empl_dept']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_empl_dept']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_empl_dept']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_empl_dept']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_empl_dept']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_empl_dept']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_empl_dept']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_empl_dept']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_empl_dept']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_empl_dept']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_empl_dept']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_empl_dept']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_empl_dept']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_empl_dept']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_empl_dept']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_empl_dept']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_empl_dept']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_empl_dept']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_empl_dept']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_empl_dept']['field_api_classes'] = 0;
  /* Field: User: Office Location */
  $handler->display->display_options['fields']['field_office_location']['id'] = 'field_office_location';
  $handler->display->display_options['fields']['field_office_location']['table'] = 'field_data_field_office_location';
  $handler->display->display_options['fields']['field_office_location']['field'] = 'field_office_location';
  $handler->display->display_options['fields']['field_office_location']['label'] = '';
  $handler->display->display_options['fields']['field_office_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_office_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_office_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_office_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_office_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_office_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_office_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_office_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_office_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_office_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_office_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_office_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_office_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_office_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_office_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_office_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_office_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_office_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_office_location']['field_api_classes'] = 0;
  /* Field: User: Title */
  $handler->display->display_options['fields']['field_empl_title']['id'] = 'field_empl_title';
  $handler->display->display_options['fields']['field_empl_title']['table'] = 'field_data_field_empl_title';
  $handler->display->display_options['fields']['field_empl_title']['field'] = 'field_empl_title';
  $handler->display->display_options['fields']['field_empl_title']['label'] = '';
  $handler->display->display_options['fields']['field_empl_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_empl_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_empl_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_empl_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_empl_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_empl_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_empl_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_empl_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_empl_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_empl_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_empl_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_empl_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_empl_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_empl_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_empl_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_empl_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_empl_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_empl_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_empl_title']['field_api_classes'] = 0;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Office Location (field_office_location) */
  $handler->display->display_options['filters']['field_office_location_value']['id'] = 'field_office_location_value';
  $handler->display->display_options['filters']['field_office_location_value']['table'] = 'field_data_field_office_location';
  $handler->display->display_options['filters']['field_office_location_value']['field'] = 'field_office_location_value';
  $handler->display->display_options['filters']['field_office_location_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_office_location_value']['expose']['operator_id'] = 'field_office_location_value_op';
  $handler->display->display_options['filters']['field_office_location_value']['expose']['label'] = 'Office Location (field_office_location)';
  $handler->display->display_options['filters']['field_office_location_value']['expose']['operator'] = 'field_office_location_value_op';
  $handler->display->display_options['filters']['field_office_location_value']['expose']['identifier'] = 'field_office_location_value';
  $handler->display->display_options['filters']['field_office_location_value']['expose']['reduce'] = 0;
  /* Filter criterion: User: Department (field_empl_dept) */
  $handler->display->display_options['filters']['field_empl_dept_value']['id'] = 'field_empl_dept_value';
  $handler->display->display_options['filters']['field_empl_dept_value']['table'] = 'field_data_field_empl_dept';
  $handler->display->display_options['filters']['field_empl_dept_value']['field'] = 'field_empl_dept_value';
  $handler->display->display_options['filters']['field_empl_dept_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_empl_dept_value']['expose']['operator_id'] = 'field_empl_dept_value_op';
  $handler->display->display_options['filters']['field_empl_dept_value']['expose']['label'] = 'Department (field_empl_dept)';
  $handler->display->display_options['filters']['field_empl_dept_value']['expose']['operator'] = 'field_empl_dept_value_op';
  $handler->display->display_options['filters']['field_empl_dept_value']['expose']['identifier'] = 'field_empl_dept_value';
  $handler->display->display_options['filters']['field_empl_dept_value']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'users/directory';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'users/directory/table';
  $export['employee_directory'] = $view;

  return $export;
}
