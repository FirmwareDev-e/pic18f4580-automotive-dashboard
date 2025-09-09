/* 
 * File:   msg_id.h
 * Author: Emertxe
 *
 * Created on March 20, 2025, 5:53 PM
 */

#ifndef MSG_ID_H
#define	MSG_ID_H

#define RIGHT_IND_ON() (PORTB = PORTB | 0xC0)
#define LEFT_IND_ON() (PORTB = PORTB | 0x03)
#define IND_OFF() (PORTB = PORTB & ~(0xC3))

#define SPEED_MSG_ID 0x10
#define GEAR_MSG_ID 0x20
#define RPM_MSG_ID 0x30
#define ENG_TEMP_MSG_ID 0x40
#define INDICATOR_MSG_ID 0x50

#endif	/* MSG_ID_H */

