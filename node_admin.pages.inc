<?php

/**
 * @file
 * Contains page callbacks of Node Admin module
 */


/**
 * Page callback.
 *
 * @param $type
 *
 * @return bool
 */
function node_admin_page($type) {
  return drupal_get_form('node_admin_type_select_form') . views_embed_view('node_admin', 'block_1', $type);
}
