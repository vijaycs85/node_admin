<?php

/**
 * Page callbacks for Node Admin module.
 */


/**
 * Page callback.
 *
 * @param $type
 *
 * @return bool
 */
function node_admin_page($type) {
  return views_embed_view('admin_node', 'block_1', $type);
}
