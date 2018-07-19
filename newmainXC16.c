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
#include "i2c1.h"

int main(void) {    
    // Init UART1
    initU1(BRATE, U1MODE_BOTH, U1STA_BOTH);
    putU1S("Uart1 init\n\r");
    
    // Init I2C
    i2cInit(SSPADD1);
    putU1S("i2c1 init\n\r");
    
    while(1){
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