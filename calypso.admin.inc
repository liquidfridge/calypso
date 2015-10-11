<?php

/**
 * @file
 * Admin pages
 *
 * @author Hein Bekker <hein@netbek.co.za>
 * @copyright (c) 2015 Hein Bekker
 * @license http://www.gnu.org/licenses/gpl-2.0.txt GPLv2
 */

/**
 * Settings form builder.
 */
function calypso_admin_settings() {
  $form = array();

  return system_settings_form($form);
}
