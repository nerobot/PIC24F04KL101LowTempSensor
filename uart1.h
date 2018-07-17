/* 
 * File:   uart1.h
 * Author: stevend
 *
 * Created on 17 July 2018, 07:34
 */

#ifndef UART1_H
#define	UART1_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <xc.h> // include processor files - each processor file is guarded.
    
#define DEBUG    

//void initU1();                          //! Initialise the uart1 module
void initU1(uint8_t bRate, uint16_t u1Mode, uint16_t u1Sta);    //! Initialise the Uart1 module    
void putU1(char c);                     //! Put a single byte on the uart
void putU1S(char *s);                   //! Print a string of unknown length, ending in \0
void putU1S2(char *s, uint8_t size);    //! Print a string of known length

#ifdef	__cplusplus
}
#endif

#endif	/* UART1_H */

