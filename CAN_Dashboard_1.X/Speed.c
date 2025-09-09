
#include <xc.h>
#include "msg_id.h"

uint8_t speed(void) 
{
    unsigned int speed;
    speed = read_adc(CHANNEL4)/10.33; 
    return speed; 
}
