<?php

class ViewsBootstrapResponsiveGridPluginStyle extends views_plugin_style {

  /**
   * Define each bootstrap breakpoints
   * @see http://getbootstrap.com/css/#grid-responsive-resets
   * @var array
   */
  protected $columnBreakpoints = array(
    'xs' => array(
      'title' => 'Extra small devices',
      'default' => 12,
    ),
    'sm' => array(
      'title' => 'Small devices Tablets',
      'default' => 3,
    ),
    'md' => array(
      'title' => 'Medium devices Desktops ',
      'default' => 0,
    ),
    'lg' => array(
      'title' => 'Large devices Desktops ',
      'default' => 0,
    ),
  );

  public function option_definition() {
    $options = parent::option_definition();

    foreach ($this->columnBreakpoints as $breakpointSize => $breakpoint) {
      $optionKey = 'item_per_row_' . $breakpointSize;
      $options[$optionKey] = array(
        'default' => $breakpoint['default']
      );
    }

    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $columns_choices = array(
      0 => '- disabled -',
      1 => 1,
      2 => 2,
      3 => 3,
      4 => 4,
      6 => 6,
      12 => 12,
    );

    foreach ($this->columnBreakpoints as $breakpointKey => $breakpoint) {
      $optionKey = 'item_per_row_' . $breakpointKey;
      $form[$optionKey] = array(
        '#type' => 'select',
        '#title' => $breakpoint['title']. ' - Number of items per row',
        '#options' => $columns_choices,
        '#required' => TRUE,
        '#default_value' => $this->options[$optionKey],
      );
    }
  }

  /**
   * @return array
   */
  public function getColumnBreakpoints()
  {
    return $this->columnBreakpoints;
  }
}