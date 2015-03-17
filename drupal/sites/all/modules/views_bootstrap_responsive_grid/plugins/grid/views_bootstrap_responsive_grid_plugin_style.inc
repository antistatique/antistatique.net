<?php

class ViewsBootstrapResponsiveGridPluginStyle extends views_plugin_style {

  public function option_definition() {
    $options = parent::option_definition();
    $options['columns'] = array(
      'default' => 4,
//      'translatable' => FALSE,
//      'contains' => array(6, 4, 2),
//      'bool' => FALSE,
//      'export' => 'my_php_callback',
//      'unpack_translatable' => 'my_php_callback',
    );

    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $columns_choices = range(1, 12);

    $form['columns'] = array(
      '#type' => 'select',
      '#title' => 'Number of items per row',
      '#options' => array_combine($columns_choices, $columns_choices),
      '#required' => TRUE,
      '#default_value' => $this->options['columns'],
    );
  }


}