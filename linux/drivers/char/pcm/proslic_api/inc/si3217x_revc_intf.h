/*
** Copyright (c) 2007-2013 by Silicon Laboratories
**
** $Id: si3217x_revc_intf.h,v 1.1.1.1 2015/01/14 09:44:11 mt7620 Exp $
**
** si3217x_revC_intf.h
** Si3217x RevB ProSLIC interface header file
**
** Author(s): 
** cdp
**
** Distributed by: 
** Silicon Laboratories, Inc
**
** This file contains proprietary information.	 
** No dissemination allowed without prior written permission from
** Silicon Laboratories, Inc.
**
** File Description:
** This is the header file for the ProSLIC driver.
**
** Dependancies:
** proslic_datatypes.h, Si3217x_registers.h, ProSLIC.h
**
*/
#ifndef SI3217X_REVC_INTF_H
#define SI3217X_REVC_INTF_H


/*
** Function: Si3217x_RevC_GenParamUpdate
**
** Description: 
** Update Si3217x general parameters and other required modifications
** to default reg/ram values
**
** Returns:
** int (error)
**
*/
int Si3217x_RevC_GenParamUpdate(proslicChanType_ptr hProslic,initSeqType seq);


/*
** Function: Si3217x_RevC_SelectPatch
**
** Description: 
** Select appropriate patch based on general parameters
**
** Returns:
** int (error)
**
*/
int Si3217x_RevC_SelectPatch(proslicChanType_ptr hProslic,const proslicPatch **patch);

/*
** Function: Si3217x_RevC_ConverterSetup
**
** Description: 
** Program revision specific settings before powering converter
**
** Specifically, from general parameters and knowledge that this
** is Rev C, setup dcff drive, gate drive polarity, and charge pump.
**
** Returns:
** int (error)
**
*/
int Si3217x_RevC_ConverterSetup(proslicChanType_ptr pProslic);

/*
** Function: Si3217x_RevC_PulseMeterSetup
**
** Description: 
** configure pulse metering
*/
int Si3217x_RevC_PulseMeterSetup (proslicChanType_ptr hProslic, int preset);

#endif

