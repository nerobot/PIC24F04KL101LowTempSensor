/*
 * File:   newmainXC16.c
 * Author: stevend
 *
 * Created on 17 July 2018, 07:14
 */

#include "config.h"
#include "PIC24F04KL101.h"
#include <xc.h>
#include <libpic30.h>

int main(void) {
    // Init LED
    LED_TRIS = 0;
    LED = 0;
    
    while(1){
        LED ^= 1;
        __delay_ms(1000);
    }
    
    return 0;
}
