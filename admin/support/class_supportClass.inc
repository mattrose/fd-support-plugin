<?php
class supportClass extends simplePlugin
{
  var $objectclasses   = array("supportClass",'top');

  static function plInfo()
  {
    return array(
      'plShortName'   => _('SupportClass'),
      'plDescription' => _('Support Agreement Details'),
      'plObjectType'  => array('supportClass' => array(
        'name'        => _('supportClass'),
        'filter'      => 'objectClass=supportClass',
        'icon'        => 'geticon.php?context=applications&icon=supportclass&size=16',
        'ou'          => ''
      ))
    );
  }
}
