/*
 * File:   Gear.c
 * 
 *
 * Created on 21 May, 2025, 4:13 PM
 */


#include <xc.h>
#include "msg_id.h"
#include "digital_keypad.h"
#include <stdint.h>
int gr = 0;

uint8_t gear() {
    char key = read_digital_keypad(STATE_CHANGE);
    if (key == SWITCH1) {
        if (gr < 6) {
            gr++;
        }
    } else if (key == SWITCH3) {
        if (gr > 0) gr--;
    } else if (key == SWITCH4) {
        gr = 7;
    }

    return gr;
}
