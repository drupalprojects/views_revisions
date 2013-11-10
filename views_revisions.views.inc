<?php

/**
 * Implements hook_views_data().
 */
function views_revisions_views_data() {
  $table = array(
    'views_revisions' => array(
      'table' => array(
        'group' => 'Views Revisions',
        'base' => array(
          'field' => 'vrvid',
          'title' => t('Views Revisions'),
          'help' => t('The Views Revisions Table'),
        ),
      ),
      'vrvid' => array(
        'title' => t('Views Revisions VID'),
        'help' => t('The Views Revisions version id'),
        'field' => array(
          'handler' => 'views_handler_field_numeric',
          'click sortable' => TRUE,
        ),
      ),
      'vid' => array(
        'title' => t('Views ID'),
        'help' => t('The Views ID'),
        'field' => array(
          'handler' => 'views_handler_field_numeric',
          'click sortable' => TRUE,
        ),
      ),
      'uid' => array(
        'title' => t('User ID'),
        'help' => t('The user id of the acting user'),
        'field' => array(
          'handler' => 'views_handler_field_user',
          'click sortable' => TRUE,
        ),
        'relationship' => array(
          'title' => t('Acting User Account'),
          'help' => t('The user made the views revision'),
          'base' => 'users',
          'base_field' => 'uid',
          'handler' => 'views_handler_relationship',
          'label' => t('Acting User Account'),
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_user',
        ),
        'sort' => array(
          'handler' => 'views_handler_sort',
        ),
      ),
      'created' => array(
        'title' => t('Created'),
        'help' => t('The entity creation date'),
        'field' => array(
          'handler' => 'views_handler_field_date',
          'click sortable' => TRUE,
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_date',
        ),
        'sort' => array(
          'handler' => 'views_handler_sort',
        ),
      ),
      'log' => array(
        'title' => t('Log'),
        'help' => t('The Views Revisions log entry'),
        'field' => array(
          'handler' => 'views_handler_field',
          'click sortable' => TRUE,
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_string',
        ),
        'sort' => array(
          'handler' => 'views_handler_sort',
        ),
      ),
      'data' => array(
        'title' => t('Data'),
        'help' => t('The Views Revisions ctools export data'),
        'field' => array(
          'handler' => 'views_handler_field',
          'click sortable' => TRUE,
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_string',
        ),
        'sort' => array(
          'handler' => 'views_handler_sort',
        ),
      ),
    ),
  );
  return $table;
}

