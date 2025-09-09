/*
 * File:   RPM.c
 * Author: kiran jadhav
 *
 * Created on 27 May, 2025, 2:15 PM
 */


#include <xc.h>
#include "adc.h"
#include "clcd.h"
#include "main.h"
 int divisor = 1000;
    int digit=0,digit1=0,digit2=0,digit3=0;
void rpm(void) {
    init_adc();
    init_clcd();
    long int value =((long)read_adc(CHANNEL4)*6000)/1023;
   
 
    digit = (value / divisor);
    digit1=(value/100)%10;
    digit2=(value/10)%10;
    digit3=value%10;
    
     clcd_putch(('0' + digit), LINE2(6));
     clcd_putch(('0' + digit1), LINE2(7));
     clcd_putch(('0' + digit2), LINE2(8));
     clcd_putch(('0' + digit3), LINE2(9));
    return;
}
