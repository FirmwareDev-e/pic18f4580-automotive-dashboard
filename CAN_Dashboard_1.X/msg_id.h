
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H


#include "adc_header.h"
#include "clcd.h"
#include"matrix_keypad.h"   
#include <xc.h>
#define SPEED_MSG_ID     0x10
#define GEAR_MSG_ID     0x20
#define RPM_MSG_ID      0X30
#define INDICATOR_MSG_ID 0x50
 uint8_t speed(void);
uint8_t gear(void);
void temp(void);
#endif	/* XC_HEADER_TEMPLATE_H */

