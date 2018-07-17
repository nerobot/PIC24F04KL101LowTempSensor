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
        // Flashing the LED
        LED ^= 1;
        __delay_ms(1000);
    }
    
    return 0;
}

/** @mainpage
 * 
 * @author Steven Daglish
 * 
 * @date 17 July 2018
 * 
 * @version 0.1
 * 
 * @section secOverview Overview
 *  
 * Prototyping of PIC24F04KL101 low power RF temperature sensor.
 * 
 * @section secHistory History
 * 
 * # 17 July 2018
 * 
 *  * First creation of project using the PIC24F04KL101 MCU.
 */