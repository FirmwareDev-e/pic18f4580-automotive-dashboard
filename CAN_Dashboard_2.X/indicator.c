/*
 * File:   indicator.c
 * Author: kiran jadhav
 *
 * Created on 27 May, 2025, 8:52 PM
 */


#include <xc.h>
#include "main.h"
int left=0,right=0,delay=20000;
void init_indicate()
{
    TRISC=TRISC |(0x07);
    TRISB0=0X00;
    RB0=0X00;
    TRISB1=0;
    RB1=0;
    TRISB6=0;
    RB6=0;
    TRISB7=0;
    RB7=0;
    
}

void indi(void) {
    init_indicate();
    
    if(RC0==0)
    {
        left=1;
       
    }
     if (left==1)
        {
         if(delay--==0)
         {
            RB0=!RB0;
            
            RB1=!RB1;
            right=0;
            delay=20000;
            
        }
     }
    if (RC2==0)
    {
        right=1;
    }
    if(right==1)
    {
        if(delay--==0)
        {
     RB6=!RB6;   
     RB7=!RB7;
     left=0;
     delay=20000;
    }
    }
    if (RC1==0)
    {
        left=0;
        right=0;
    }
    
    return;
}
