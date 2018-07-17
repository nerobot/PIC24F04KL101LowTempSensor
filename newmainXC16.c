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
#include "uart1.h"

/*#define XTAL_FREQ       8000000UL           // Raw oscillator freq
#define FCY             XTAL_FREQ / 2       // Most but not all PIC24s
    
#define BR              9600                 // Baud rate
#define BRATE           ((FCY/BR)/16)-1
#define U1MODE_HIGH     0b10000000          // Bits 8-15
#define U1MODE_LOW      0b00000000          // Bits 0-7
#define U1MODE_BOTH     (U1MODE_HIGH << 8) + U1MODE_LOW
#define U1STA_HIGH      0b00010100          // Bits 8-15
#define U1STA_LOW       0b00000000          // Bits 0-7
#define U1STA_BOTH      (U1STA_HIGH << 8) + U1STA_LOW*/

int main(void) {
    // Init LED
    LED_TRIS = 0;
    LED = 0;
    
    // Init I2C
    initU1(BRATE, U1MODE_BOTH, U1STA_BOTH);
    
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