/*
 * File:   main.c
 * Author: kiran jadhav
 *
 * Created on 6 June, 2025, 10:31 PM
 */

#include <xc.h>
#include "can.h"
#include "clcd.h"
#include <stdio.h>
#include "msg_id.h"
#include <stdint.h>
void update_ind(uint8_t indcator);
uint8_t speed, gear, indicator;
uint16_t rpm;

void init_led()
{
    TRISB0 = 0x00;
    TRISB1 = 0x00;
    TRISB6 = 0x00;
    TRISB7 = 0x00;
    PORTB = 0x00;
}
void main(void) 
{
    init_clcd();
    init_led();
    init_can();
    unsigned char Gear[8][3]={"GN","G1","G2","G3","G4","G5","G6","C_"};
     
    uint16_t msg_id;
    uint8_t data[2], len;
    uint8_t line[17];
   
    while(1)
    {
    
        can_receive(&msg_id, data, &len);
    
        switch(msg_id)
        {
//            case SPEED_MSG_ID:     
//                speed = data[0];
//                sprintf(line,"S:%-2d",speed);
//                clcd_print(line,LINE1(0));
//                break;
//               
//            case GEAR_MSG_ID:
//                gear = data[0];
//                sprintf(line,"S:%-2d",speed);
//                clcd_print(line,LINE1(0));
//                clcd_print(Gear[gear],LINE1(6));
//                break;
//            case RPM_MSG_ID:
//                rpm = (data[0] << 8) | data[1];
//                sprintf(line,"RPM :%d IND : %c",rpm, indicator);
//                clcd_print(line,LINE2(0));
//                break;
//            case INDICATOR_MSG_ID:
//                indicator = data[0];
//                sprintf(line,"RPM :%d IND : %c",rpm, indicator);
//                clcd_print(line,LINE2(0));
//                break;
                case SPEED_MSG_ID:
                    speed = data[0];
                    sprintf(line, "Speed : %-2d %s", speed, Gear[gear]);
                    clcd_print(line, LINE1(0));
                    break;

                case GEAR_MSG_ID:
                    gear = data[0];
                    sprintf(line, "Speed : %-2d %s", speed, Gear[gear]);
                    clcd_print(line, LINE1(0));
                    break;

                case RPM_MSG_ID:
                    rpm = (data[0] << 8) | data[1];
                    sprintf(line, "RPM:%4d IND:%c", rpm, indicator);
                    clcd_print(line, LINE2(0));
                    break;

                case INDICATOR_MSG_ID:
                    indicator = data[0];
//                    update_ind(indicator);
                    sprintf(line, "RPM:%4d IND:%c", rpm, indicator);
                    clcd_print(line, LINE2(0));
                    break;
        }
    
    }
    
}

void update_ind(uint8_t indicator)
{
    switch(indicator)
    {
        case 'L':
            IND_OFF();
            LEFT_IND_ON();
            break;
        case 'R':
            IND_OFF();
            RIGHT_IND_ON();
            break;
        case '_':
            IND_OFF();
            break;    
        default:
            IND_OFF();
            break;

    }
}

