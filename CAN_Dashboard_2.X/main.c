/*
 * File:   main.c
 * Author: kiran jadahav
 *
 * Created on 27 May, 2025, 9:05 PM
 */


#include <xc.h>
#include "main.h"
#include "clcd.h"
void main(void) {
     init_clcd();
   // clcd_print("RPM", LINE1(1));
      clcd_putch('R',LINE1(6));
      clcd_putch('P',LINE1(7));
      clcd_putch('M',LINE1(8));
     
    head();
    while(1)
    {
       // indi();
        rpm();
    }
    return;
}
