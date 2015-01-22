<?php
/**
 * @file
 * bsc_install.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bsc_install_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-us:<front>
  $menu_links['main-menu_about-us:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'About Us',
    'options' => array(
      'identifier' => 'main-menu_about-us:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact-us:<front>
  $menu_links['main-menu_contact-us:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Contact Us',
    'options' => array(
      'identifier' => 'main-menu_contact-us:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_our-work:<front>
  $menu_links['main-menu_our-work:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Our Work',
    'options' => array(
      'identifier' => 'main-menu_our-work:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Exported menu link: management_administration-menu:admin/config/administration/admin_menu
  $menu_links['management_administration-menu:admin/config/administration/admin_menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/administration/admin_menu',
    'router_path' => 'admin/config/administration/admin_menu',
    'link_title' => 'Administration menu',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust administration menu settings.',
      ),
      'identifier' => 'management_administration-menu:admin/config/administration/admin_menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin/config/administration',
  );
  // Exported menu link: management_jquery-update:admin/config/development/jquery_update
  $menu_links['management_jquery-update:admin/config/development/jquery_update'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/jquery_update',
    'router_path' => 'admin/config/development/jquery_update',
    'link_title' => 'jQuery update',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings related to the jQuery upgrade, the library path and compression.',
      ),
      'identifier' => 'management_jquery-update:admin/config/development/jquery_update',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_responsive-menus:admin/config/user-interface/responsive_menus
  $menu_links['management_responsive-menus:admin/config/user-interface/responsive_menus'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/responsive_menus',
    'router_path' => 'admin/config/user-interface/responsive_menus',
    'link_title' => 'Responsive Menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for Responsive Menus module',
      ),
      'identifier' => 'management_responsive-menus:admin/config/user-interface/responsive_menus',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Administration menu');
  t('Contact Us');
  t('Home');
  t('Our Work');
  t('Responsive Menus');
  t('jQuery update');


  return $menu_links;
}
