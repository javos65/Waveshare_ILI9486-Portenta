
/*****************************************************************************
* | File      	:	BLE_config.h.h
* | Function    :	debug with Serial print and println 
* | Info        : 	JV 2024
*----------------
* |	This version:   V1.0
* | Date        :   2024-02-16
* | Info        :   Basic version defines BKE UUID and BLEDEvice
*                   Using standard ArduinoBLE library
******************************************************************************/

#ifndef BLECONF_H
#define BLECONF_H


#include <ArduinoBLE.h>

#define DKEY_RIGHTARROW	0xae
#define DKEY_LEFTARROW	0xac
#define DKEY_UPARROW		0xad
#define DKEY_DOWNARROW	0xaf
#define DKEY_FIRE		    0xa3
#define DKEY_ESCAPE		  0x1b // ascii escape
#define DKEY_ENTER		  0x0d // ascii carriage return
#define DKEY_TAB			  0x09 //ascii TAB
#define DKEY_PAUSE	    0xff


extern int BLEinit();
extern uint16_t BLEgetKey();
extern bool BLECheck();

#endif  BLECONF_H
