<?php
class supportAgreement extends simplePlugin
{
  var $mainTab = TRUE;
  var $objectclasses   = array("supportAgreement",'top');

  static function plInfo()
  {
    return array(
      'plShortName'   => _('Support'),
      'plDescription' => _('Support Agreement Details'),
      'plObjectType'  => array('supportAgreement' => array(
        'name'        => _('supportAgreement'),
        'filter'      => 'objectClass=supportAgreement',
        'icon'        => 'geticon.php?context=applications&icon=supportagreement&size=16',
        'ou'	      => 'ou=agreements,'
      ))
    );
  }

  static function getAttributesInfo ()
  {
    return array(
      'supportName' => array(
        'name' => _('Name'),
        'attrs' => array(
          new StringAttribute (
            _("Support Agrrement Name"), _("Name to describe this Support Agreement"),
            'cn', TRUE
          )
        )
      ),
      'membership' => array(
        'name'  => _('Membership'),
        'attrs' => array(
          new BooleanAttribute (
            _('Active'), _('Is the membership of this organization active'),
            'supportAgreementIsActive', FALSE
          ),
          new BaseSelectorAttribute (
            _('Department'),_('Support Contract Department'),'', FALSE, '', 'base'
          ),
          new ObjectSelectAttribute(_('Support Level'), _('Support Level'), 'supportAgreementClass', FALSE, 'supportClass')
        )
      ),
      'dates' => array(
        'name'  => _('Dates'),
        'attrs' => array(
          new GeneralizedTimeDateAttribute (
            _('Start date'), _('Date of the beginning'),
            'supportAgreementStarted', TRUE
          ),
          new GeneralizedTimeDateAttribute (
            _('End date'), _('Date of the end'),
            'supportAgreementEnds', FALSE
          ),
          new GeneralizedTimeDateAttribute (
            _('Last Change'), _('Date of the beginning'),
            'supportAgreementIsActiveLastChange', TRUE
          )
        )
      )
    );
  }
}
?>
