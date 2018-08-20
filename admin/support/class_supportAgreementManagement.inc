<?php

class supportAgreementManagement extends simpleManagement
{
	protected $objectTypes = array('supportAgreement','supportClass');
	// protected $autoFilterAttributes = array('dn', 'cn', 'description');
	static function plInfo() 
	{
		return array(
			'plShortName' 	=> _('Support'),
			'plDescription' => _('Support Agreement Details'),
			'plIcon'        => 'geticon.php?context=applications&icon=support&size=48',
			'plSmallIcon'   => 'geticon.php?context=applications&icon=supportagreement&size=16',
			'plCategory'	=> array('supportAgreement'),
			'plSection'	=> 'accounts'
			// 'plManages'	=> ('supportAgreement'),
			// 'plProvidedAcls' => array()
		);
	}
}
?>	
