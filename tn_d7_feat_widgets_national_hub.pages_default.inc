<?php
/**
 * @file
 * tn_d7_feat_widgets_national_hub.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function tn_d7_feat_widgets_national_hub_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tn_widget_entry_user_submit_thanks';
  $page->task = 'page';
  $page->admin_title = 'TN widgets - Entry (user, submit, thanks)';
  $page->admin_description = 'Part of the IIRS; provides a multilingual entry widget page that handles the login/register, submit, thank you steps.

%country_code/';
  $page->path = 'tn-widgets/national/user-submit-thanks/%country/%nodetype/!step';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Entry',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'country' => array(
      'id' => 1,
      'identifier' => 'Country: ISO Code',
      'name' => 'country_code',
      'settings' => array(),
    ),
    'nodetype' => array(
      'id' => 2,
      'identifier' => 'Node type',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
    'step' => array(
      'id' => 1,
      'identifier' => 'Step name',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_tn_widget_entry_user_submit_thanks_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'tn_widget_entry_user_submit_thanks';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Initiative',
    'no_blocks' => 1,
    'pipeline' => 'mlpanels_renderer_standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'inside-widget container',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(),
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'IIRS %step:raw';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'workflow_container';
    $pane->subtype = 'workflow_container';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mlpanels' => array(
        'und' => array(
          'workflow' => 'loginregister_submit_thanks',
          0 => NULL,
          'context' => 'argument_string_1',
          'override_title' => 0,
          'override_title_text' => '',
          'node_type' => 'initiative',
          'thankyou_content' => array(
            'value' => 'OMG!OMG!OMG!',
          ),
        ),
        'fr' => array(
          'workflow' => 'loginregister_submit_thanks',
          0 => NULL,
          'context' => 'argument_string_1',
          'override_title' => 0,
          'override_title_text' => '',
          'node_type' => 'initiative',
          'thankyou_content' => array(
            'value' => 'Merci! Merci! Merci!',
          ),
        ),
      ),
      'workflow' => 'loginregister_submit_thanks',
      0 => NULL,
      'context' => 'argument_string_1',
      'override_title' => 0,
      'override_title_text' => '',
      'node_type' => 'initiative',
      'thankyou_content' => array(
        'value' => 'OMG!OMG!OMG!',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '%step:raw %nodetype:raw %country:name',
      'format' => 'plain_text',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['middle'][1] = 'new-2';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tn_widget_entry_user_submit_thanks'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'tn_widgets_view_initiative_tabs';
  $page->task = 'page';
  $page->admin_title = 'TN widgets - View initiative tabs';
  $page->admin_description = 'A page that takes shows a list, details and search facility for the \'view\' pages inside a widget. To be used with Widgetizer.';
  $page->path = 'tn-widgets/national/initiatives/%country/!tab';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'Tabbb',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'country' => array(
      'id' => 1,
      'identifier' => 'Country: ISO Code',
      'name' => 'country_code',
      'settings' => array(),
    ),
    'tab' => array(
      'id' => 1,
      'identifier' => 'Tab',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_tn_widgets_view_initiative_tabs_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'tn_widgets_view_initiative_tabs';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Recent tab',
    'no_blocks' => 0,
    'pipeline' => 'mlpanels_renderer_standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'context_exists',
          'settings' => array(
            'exists' => '0',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'recent',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
    'middle' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mlpanels' => array(
        'und' => array(
          'admin_title' => '',
          'title' => 'Initiatives in %country:name',
          'body' => '',
          'format' => 'filtered_html',
          'substitute' => 1,
        ),
        'fr' => array(
          'admin_title' => '',
          'title' => 'Initiatives en %country:name',
          'body' => '',
          'format' => 'filtered_html',
          'substitute' => 1,
        ),
      ),
      'admin_title' => '',
      'title' => 'Initiatives in %country:name',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['middle'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mlpanels' => array(
        'und' => array(
          'admin_title' => 'Tabs - PHP',
          'title' => '',
          'body' => '<ul class="nav nav-pills">
  <li<?php if (\'%tab:raw\' == \'\' || \'%tab:raw\' == \'recent\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Recent\'), \'tn-widgets/initiatives/national/%country:iso2/recent\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'search\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Search\'), \'tn-widgets/initiatives/national/%country:iso2/search\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'map\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Map\'), \'tn-widgets/initiatives/national/%country:iso2/map\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'about\') { print \' class="active"\'; } ?>>
<?php print l(t(\'About\'), \'tn-widgets/initiatives/national/%country:iso2/about\'); ?>
  </li>
</ul>',
          'format' => 'php_code',
          'substitute' => 1,
        ),
      ),
      'admin_title' => 'Tabs - PHP',
      'title' => '',
      'body' => '<ul class="nav nav-pills">
  <li<?php if (\'%tab:raw\' == \'\' || \'%tab:raw\' == \'recent\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Recent\'), \'tn-widgets/initiatives/national/%country:iso2/recent\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'search\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Search\'), \'tn-widgets/initiatives/national/%country:iso2/search\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'map\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Map\'), \'tn-widgets/initiatives/national/%country:iso2/map\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'about\') { print \' class="active"\'; } ?>>
<?php print l(t(\'About\'), \'tn-widgets/initiatives/national/%country:iso2/about\'); ?>
  </li>
</ul>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['middle'][1] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'tn_initiatives_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mlpanels' => array(
        'und' => array(
          'use_pager' => 1,
          'pager_id' => '0',
          'items_per_page' => '10',
          'fields_override' => array(
            'title' => 1,
            'field_location' => 1,
            'field_summary' => 1,
          ),
          'override_title' => 1,
          'override_title_text' => '',
        ),
      ),
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'fields_override' => array(
        'title' => 1,
        'field_location' => 1,
        'field_summary' => 1,
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container view-tiles',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['middle'][2] = 'new-5';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-3';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_tn_widgets_view_initiative_tabs_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'tn_widgets_view_initiative_tabs';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Search tab',
    'no_blocks' => 0,
    'pipeline' => 'mlpanels_renderer_standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'search',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
    'middle' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Title & help',
      'title' => 'Initiatives in %country:name',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['middle'][0] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mlpanels' => array(
        'und' => array(
          'admin_title' => 'Tabs - PHP',
          'title' => '',
          'body' => '<ul class="nav nav-pills">
  <li<?php if (\'%tab:raw\' == \'\' || \'%tab:raw\' == \'recent\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Recent\'), \'tn-widgets/initiatives/national/%country:iso2/recent\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'search\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Search\'), \'tn-widgets/initiatives/national/%country:iso2/search\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'map\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Map\'), \'tn-widgets/initiatives/national/%country:iso2/map\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'about\') { print \' class="active"\'; } ?>>
<?php print l(t(\'About\'), \'tn-widgets/initiatives/national/%country:iso2/about\'); ?>
  </li>
</ul>',
          'format' => 'php_code',
          'substitute' => 1,
        ),
      ),
      'admin_title' => 'Tabs - PHP',
      'title' => '',
      'body' => '<ul class="nav nav-pills">
  <li<?php if (\'%tab:raw\' == \'\' || \'%tab:raw\' == \'recent\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Recent\'), \'tn-widgets/initiatives/national/%country:iso2/recent\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'search\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Search\'), \'tn-widgets/initiatives/national/%country:iso2/search\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'map\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Map\'), \'tn-widgets/initiatives/national/%country:iso2/map\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'about\') { print \' class="active"\'; } ?>>
<?php print l(t(\'About\'), \'tn-widgets/initiatives/national/%country:iso2/about\'); ?>
  </li>
</ul>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['middle'][1] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'tn_initiatives_list-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mlpanels' => array(
        'und' => array(
          'use_pager' => 1,
          'pager_id' => '0',
          'items_per_page' => '10',
          'override_title' => 1,
          'override_title_text' => '',
        ),
      ),
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container view-tiles',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-8'] = $pane;
    $display->panels['middle'][2] = 'new-8';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-6';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_tn_widgets_view_initiative_tabs_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'tn_widgets_view_initiative_tabs';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Map tab',
    'no_blocks' => 0,
    'pipeline' => 'mlpanels_renderer_standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'map',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
    'middle' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Title & help',
      'title' => 'Initiatives in %country:name',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-9'] = $pane;
    $display->panels['middle'][0] = 'new-9';
    $pane = new stdClass();
    $pane->pid = 'new-10';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mlpanels' => array(
        'und' => array(
          'admin_title' => 'Tabs - PHP',
          'title' => '',
          'body' => '<ul class="nav nav-pills">
  <li<?php if (\'%tab:raw\' == \'\' || \'%tab:raw\' == \'recent\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Recent\'), \'tn-widgets/initiatives/national/%country:iso2/recent\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'search\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Search\'), \'tn-widgets/initiatives/national/%country:iso2/search\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'map\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Map\'), \'tn-widgets/initiatives/national/%country:iso2/map\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'about\') { print \' class="active"\'; } ?>>
<?php print l(t(\'About\'), \'tn-widgets/initiatives/national/%country:iso2/about\'); ?>
  </li>
</ul>',
          'format' => 'php_code',
          'substitute' => 1,
        ),
      ),
      'admin_title' => 'Tabs - PHP',
      'title' => '',
      'body' => '<ul class="nav nav-pills">
  <li<?php if (\'%tab:raw\' == \'\' || \'%tab:raw\' == \'recent\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Recent\'), \'tn-widgets/initiatives/national/%country:iso2/recent\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'search\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Search\'), \'tn-widgets/initiatives/national/%country:iso2/search\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'map\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Map\'), \'tn-widgets/initiatives/national/%country:iso2/map\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'about\') { print \' class="active"\'; } ?>>
<?php print l(t(\'About\'), \'tn-widgets/initiatives/national/%country:iso2/about\'); ?>
  </li>
</ul>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-10'] = $pane;
    $display->panels['middle'][1] = 'new-10';
    $pane = new stdClass();
    $pane->pid = 'new-11';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'tn_initiatives_maps-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mlpanels' => array(
        'und' => array(
          'use_pager' => 0,
          'pager_id' => '0',
          'items_per_page' => '0',
          'context' => array(
            0 => 'argument_country_code_1',
          ),
          'override_title' => 1,
          'override_title_text' => '',
          'exposed' => array(
            'type' => array(),
          ),
        ),
      ),
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '0',
      'context' => array(
        0 => 'argument_country_code_1',
      ),
      'override_title' => 1,
      'override_title_text' => '',
      'exposed' => array(
        'type' => array(),
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-11'] = $pane;
    $display->panels['middle'][2] = 'new-11';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-9';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_tn_widgets_view_initiative_tabs_panel_context_4';
  $handler->task = 'page';
  $handler->subtask = 'tn_widgets_view_initiative_tabs';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'About tab',
    'no_blocks' => 0,
    'pipeline' => 'mlpanels_renderer_standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'about',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
    'middle' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-12';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Title & help',
      'title' => 'Initiatives in %country:name',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-12'] = $pane;
    $display->panels['middle'][0] = 'new-12';
    $pane = new stdClass();
    $pane->pid = 'new-13';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Tabs - PHP',
      'title' => '',
      'body' => '<ul class="nav nav-tabs">
  <li<?php if (\'%tab:raw\' == \'\' || \'%tab:raw\' == \'recent\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Recent\'), \'tn-widgets/initiatives/national/%country:iso2/recent\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'search\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Search\'), \'tn-widgets/initiatives/national/%country:iso2/search\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'map\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Map\'), \'tn-widgets/initiatives/national/%country:iso2/map\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'about\') { print \' class="active"\'; } ?>>
<?php print l(t(\'About\'), \'tn-widgets/initiatives/national/%country:iso2/about\'); ?>
  </li>
</ul>',
      'format' => 'php_code',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-13'] = $pane;
    $display->panels['middle'][1] = 'new-13';
    $pane = new stdClass();
    $pane->pid = 'new-14';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'About text',
      'title' => 'About this widget and service',
      'body' => '<p>The International Initiative Registration Service (IIRS) is a Transition Network web service that enables Transition National Hubs to have a directory of Transition Initiatives in their countries, in their language, on their own website. Without having to develop and maintain all the web technology. All of the data is hosted on Transition Network web servers in the UK, and backed up to a separate database server, also in the UK. </p>

<p>Please register your Transition initiative through this service on your national hub website. By registering, you will be represented on national and international Transition maps, being part of an international movement, while being more connected to your local area. You will also be better connected to your National Hub, who can now get in touch with you using your contact details. </p>',
      'format' => 'filtered_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'container',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-14'] = $pane;
    $display->panels['middle'][2] = 'new-14';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-12';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tn_widgets_view_initiative_tabs'] = $page;

  return $pages;

}
