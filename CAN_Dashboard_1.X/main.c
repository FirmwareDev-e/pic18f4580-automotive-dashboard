/*
 * File:   main.c
 * Author: kiran jadhav
 *
 * Created on 6 June, 2025, 10:09 PM
 */
#include "msg_id.h"
#include "can.h"
#define _XTAL_FREQ 20000000
#include "digital_keypad.h"
void init_config()
{
    init_adc();
    init_clcd();
    init_can();
    init_digital_keypad();
}
void main(void) 
{
    init_config();
    int len,msg_id;
  
    uint8_t data[1];
  
    while (1) 
    {

        data[0]= speed();
        can_transmit(SPEED_MSG_ID, data, 2);
        data[0] = gear();
        can_transmit(GEAR_MSG_ID, data, 1);
       // __delay_ms(150); 
        
    }
    return;
}
