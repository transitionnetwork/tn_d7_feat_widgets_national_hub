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
    'pipeline' => 'standard',
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
  $display->uuid = 'b188e0b9-cc14-4a80-b7b6-fee60a4d58d0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b6e000fe-1f6f-41be-95d2-19ae387ed1f9';
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
            'format' => 'filtered_html',
            'value' => '<p>Thank you for registering your Transition Initiative. We appreciate you taking the time to tell us who you are; and participating in this global experiment. We all become stronger by being more connected.</p>

<p>Your application will now go to the National Hub administrator in your country who will approve it. You should receive confirmation of your application within the next few days. Then you will be on the map of Transition Initiatives for your country and internationally.</p>',
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
        'format' => 'filtered_html',
        'value' => '<p>Thank you for registering your Transition Initiative. We appreciate you taking the time to tell us who you are; and participating in this global experiment. We all become stronger by being more connected.</p>

<p>Your application will now go to the National Hub administrator in your country who will approve it. You should receive confirmation of your application within the next few days. Then you will be on the map of Transition Initiatives for your country and internationally.</p>',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'hide-title',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b6e000fe-1f6f-41be-95d2-19ae387ed1f9';
    $display->content['new-b6e000fe-1f6f-41be-95d2-19ae387ed1f9'] = $pane;
    $display->panels['middle'][0] = 'new-b6e000fe-1f6f-41be-95d2-19ae387ed1f9';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-b6e000fe-1f6f-41be-95d2-19ae387ed1f9';
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
    'pipeline' => 'standard',
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
  $display->uuid = 'ebf0573c-2344-4210-84de-bd916bff3341';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7fc62f8b-4be1-4a1a-a679-60fcea818cd5';
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
    $pane->uuid = '7fc62f8b-4be1-4a1a-a679-60fcea818cd5';
    $display->content['new-7fc62f8b-4be1-4a1a-a679-60fcea818cd5'] = $pane;
    $display->panels['middle'][0] = 'new-7fc62f8b-4be1-4a1a-a679-60fcea818cd5';
    $pane = new stdClass();
    $pane->pid = 'new-9956ac97-73f2-4561-8613-65add146562b';
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
          'body' => '<ul class="nav nav-tabs">
  <li<?php if (\'%tab:raw\' == \'\' || \'%tab:raw\' == \'recent\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Recent\'), \'tn-widgets/national/initiatives/%country:iso2/recent\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'search\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Search\'), \'tn-widgets/national/initiatives/%country:iso2/search\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'map\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Map\'), \'tn-widgets/national/initiatives/%country:iso2/map\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'about\') { print \' class="active"\'; } ?>>
<?php print l(t(\'About\'), \'tn-widgets/national/initiatives/%country:iso2/about\'); ?>
  </li>
</ul>',
          'format' => 'php_code',
          'substitute' => 1,
        ),
      ),
      'admin_title' => 'Tabs - PHP',
      'title' => '',
      'body' => '<ul class="nav nav-tabs">
  <li<?php if (\'%tab:raw\' == \'\' || \'%tab:raw\' == \'recent\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Recent\'), \'tn-widgets/national/initiatives/%country:iso2/recent\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'search\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Search\'), \'tn-widgets/national/initiatives/%country:iso2/search\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'map\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Map\'), \'tn-widgets/national/initiatives/%country:iso2/map\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'about\') { print \' class="active"\'; } ?>>
<?php print l(t(\'About\'), \'tn-widgets/national/initiatives/%country:iso2/about\'); ?>
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
    $pane->uuid = '9956ac97-73f2-4561-8613-65add146562b';
    $display->content['new-9956ac97-73f2-4561-8613-65add146562b'] = $pane;
    $display->panels['middle'][1] = 'new-9956ac97-73f2-4561-8613-65add146562b';
    $pane = new stdClass();
    $pane->pid = 'new-0d51b904-4947-4d59-a24b-b3daa945d948';
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
    $pane->uuid = '0d51b904-4947-4d59-a24b-b3daa945d948';
    $display->content['new-0d51b904-4947-4d59-a24b-b3daa945d948'] = $pane;
    $display->panels['middle'][2] = 'new-0d51b904-4947-4d59-a24b-b3daa945d948';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-7fc62f8b-4be1-4a1a-a679-60fcea818cd5';
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
    'pipeline' => 'standard',
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
  $display->uuid = '2ce375d5-8f2d-4471-9a67-516750db4b63';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fdea5ebd-42a4-4dfa-b732-6dc3d5da6abc';
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
    $pane->uuid = 'fdea5ebd-42a4-4dfa-b732-6dc3d5da6abc';
    $display->content['new-fdea5ebd-42a4-4dfa-b732-6dc3d5da6abc'] = $pane;
    $display->panels['middle'][0] = 'new-fdea5ebd-42a4-4dfa-b732-6dc3d5da6abc';
    $pane = new stdClass();
    $pane->pid = 'new-035de91c-21a0-4678-ba21-7c956230de6c';
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
          'body' => '<ul class="nav nav-tabs">
  <li<?php if (\'%tab:raw\' == \'\' || \'%tab:raw\' == \'recent\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Recent\'), \'tn-widgets/national/initiatives/%country:iso2/recent\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'search\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Search\'), \'tn-widgets/national/initiatives/%country:iso2/search\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'map\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Map\'), \'tn-widgets/national/initiatives/%country:iso2/map\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'about\') { print \' class="active"\'; } ?>>
<?php print l(t(\'About\'), \'tn-widgets/national/initiatives/%country:iso2/about\'); ?>
  </li>
</ul>',
          'format' => 'php_code',
          'substitute' => 1,
        ),
      ),
      'admin_title' => 'Tabs - PHP',
      'title' => '',
      'body' => '<ul class="nav nav-tabs">
  <li<?php if (\'%tab:raw\' == \'\' || \'%tab:raw\' == \'recent\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Recent\'), \'tn-widgets/national/initiatives/%country:iso2/recent\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'search\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Search\'), \'tn-widgets/national/initiatives/%country:iso2/search\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'map\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Map\'), \'tn-widgets/national/initiatives/%country:iso2/map\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'about\') { print \' class="active"\'; } ?>>
<?php print l(t(\'About\'), \'tn-widgets/national/initiatives/%country:iso2/about\'); ?>
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
    $pane->uuid = '035de91c-21a0-4678-ba21-7c956230de6c';
    $display->content['new-035de91c-21a0-4678-ba21-7c956230de6c'] = $pane;
    $display->panels['middle'][1] = 'new-035de91c-21a0-4678-ba21-7c956230de6c';
    $pane = new stdClass();
    $pane->pid = 'new-60f3440c-1175-4c24-a8a8-e7aa1b323339';
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
    $pane->uuid = '60f3440c-1175-4c24-a8a8-e7aa1b323339';
    $display->content['new-60f3440c-1175-4c24-a8a8-e7aa1b323339'] = $pane;
    $display->panels['middle'][2] = 'new-60f3440c-1175-4c24-a8a8-e7aa1b323339';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-fdea5ebd-42a4-4dfa-b732-6dc3d5da6abc';
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
    'pipeline' => 'standard',
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
  $display->uuid = '2586a6cb-310a-4ec2-b719-c0138c2bcd4e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-712e1d81-db57-40f3-b026-c58cc55b32ab';
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
    $pane->uuid = '712e1d81-db57-40f3-b026-c58cc55b32ab';
    $display->content['new-712e1d81-db57-40f3-b026-c58cc55b32ab'] = $pane;
    $display->panels['middle'][0] = 'new-712e1d81-db57-40f3-b026-c58cc55b32ab';
    $pane = new stdClass();
    $pane->pid = 'new-ceed4cec-1169-43a8-93e6-22ece713b8db';
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
          'body' => '<ul class="nav nav-tabs">
  <li<?php if (\'%tab:raw\' == \'\' || \'%tab:raw\' == \'recent\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Recent\'), \'tn-widgets/national/initiatives/%country:iso2/recent\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'search\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Search\'), \'tn-widgets/national/initiatives/%country:iso2/search\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'map\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Map\'), \'tn-widgets/national/initiatives/%country:iso2/map\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'about\') { print \' class="active"\'; } ?>>
<?php print l(t(\'About\'), \'tn-widgets/national/initiatives/%country:iso2/about\'); ?>
  </li>
</ul>',
          'format' => 'php_code',
          'substitute' => 1,
        ),
      ),
      'admin_title' => 'Tabs - PHP',
      'title' => '',
      'body' => '<ul class="nav nav-tabs">
  <li<?php if (\'%tab:raw\' == \'\' || \'%tab:raw\' == \'recent\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Recent\'), \'tn-widgets/national/initiatives/%country:iso2/recent\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'search\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Search\'), \'tn-widgets/national/initiatives/%country:iso2/search\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'map\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Map\'), \'tn-widgets/national/initiatives/%country:iso2/map\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'about\') { print \' class="active"\'; } ?>>
<?php print l(t(\'About\'), \'tn-widgets/national/initiatives/%country:iso2/about\'); ?>
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
    $pane->uuid = 'ceed4cec-1169-43a8-93e6-22ece713b8db';
    $display->content['new-ceed4cec-1169-43a8-93e6-22ece713b8db'] = $pane;
    $display->panels['middle'][1] = 'new-ceed4cec-1169-43a8-93e6-22ece713b8db';
    $pane = new stdClass();
    $pane->pid = 'new-be3b7fd0-216b-4336-8a7e-ce13d7af2242';
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
    $pane->uuid = 'be3b7fd0-216b-4336-8a7e-ce13d7af2242';
    $display->content['new-be3b7fd0-216b-4336-8a7e-ce13d7af2242'] = $pane;
    $display->panels['middle'][2] = 'new-be3b7fd0-216b-4336-8a7e-ce13d7af2242';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-712e1d81-db57-40f3-b026-c58cc55b32ab';
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
    'pipeline' => 'standard',
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
  $display->uuid = '3e2967f4-356d-43ef-b06c-4cb4d6ab36ab';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-01b5faff-d1f8-4f27-a90d-8e7bd6b58720';
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
    $pane->uuid = '01b5faff-d1f8-4f27-a90d-8e7bd6b58720';
    $display->content['new-01b5faff-d1f8-4f27-a90d-8e7bd6b58720'] = $pane;
    $display->panels['middle'][0] = 'new-01b5faff-d1f8-4f27-a90d-8e7bd6b58720';
    $pane = new stdClass();
    $pane->pid = 'new-529ec799-c241-4925-b517-600210ef8170';
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
          'body' => '<ul class="nav nav-tabs">
  <li<?php if (\'%tab:raw\' == \'\' || \'%tab:raw\' == \'recent\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Recent\'), \'tn-widgets/national/initiatives/%country:iso2/recent\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'search\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Search\'), \'tn-widgets/national/initiatives/%country:iso2/search\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'map\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Map\'), \'tn-widgets/national/initiatives/%country:iso2/map\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'about\') { print \' class="active"\'; } ?>>
<?php print l(t(\'About\'), \'tn-widgets/national/initiatives/%country:iso2/about\'); ?>
  </li>
</ul>',
          'format' => 'php_code',
          'substitute' => 1,
        ),
      ),
      'admin_title' => 'Tabs - PHP',
      'title' => '',
      'body' => '<ul class="nav nav-tabs">
  <li<?php if (\'%tab:raw\' == \'\' || \'%tab:raw\' == \'recent\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Recent\'), \'tn-widgets/national/initiatives/%country:iso2/recent\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'search\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Search\'), \'tn-widgets/national/initiatives/%country:iso2/search\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'map\') { print \' class="active"\'; } ?>>
<?php print l(t(\'Map\'), \'tn-widgets/national/initiatives/%country:iso2/map\'); ?>
  </li>
  <li<?php if (\'%tab:raw\' == \'about\') { print \' class="active"\'; } ?>>
<?php print l(t(\'About\'), \'tn-widgets/national/initiatives/%country:iso2/about\'); ?>
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
    $pane->uuid = '529ec799-c241-4925-b517-600210ef8170';
    $display->content['new-529ec799-c241-4925-b517-600210ef8170'] = $pane;
    $display->panels['middle'][1] = 'new-529ec799-c241-4925-b517-600210ef8170';
    $pane = new stdClass();
    $pane->pid = 'new-ba036eef-6a53-4354-844e-1d8efa2a0e1f';
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
    $pane->uuid = 'ba036eef-6a53-4354-844e-1d8efa2a0e1f';
    $display->content['new-ba036eef-6a53-4354-844e-1d8efa2a0e1f'] = $pane;
    $display->panels['middle'][2] = 'new-ba036eef-6a53-4354-844e-1d8efa2a0e1f';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-01b5faff-d1f8-4f27-a90d-8e7bd6b58720';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['tn_widgets_view_initiative_tabs'] = $page;

  return $pages;

}
