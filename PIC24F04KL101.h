/* 
 * File:   PIC24F04KL101.h
 * Author: stevend
 *
 * Created on 17 July 2018, 07:18
 */

#ifndef PIC24F04KL101_H
#define	PIC24F04KL101_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#define PIC24F04KL101
    
// Oscillator config    
#define XTAL_FREQ       8000000UL           // Raw oscillator freq
#define FCY             XTAL_FREQ / 2       // Most but not all PIC24s
    
<<<<<<< HEAD
#define LED_TRIS        TRISBbits.TRISB7    // Used for debugging and initial testing
#define LED             LATBbits.LATB7
=======
#define LED_TRIS        TRISAbits.TRISA4    // Used for debugging and initial testing
#define LED             LATAbits.LATA4
    
// Uart1 config
#define BR              9600                 // Baud rate
#define BRATE           ((FCY/BR)/16)-1
#define U1MODE_HIGH     0b10000000          // Bits 8-15
#define U1MODE_LOW      0b00000000          // Bits 0-7
#define U1MODE_BOTH     (U1MODE_HIGH << 8) + U1MODE_LOW
#define U1STA_HIGH      0b00010100          // Bits 8-15
#define U1STA_LOW       0b00000000          // Bits 0-7
#define U1STA_BOTH      (U1STA_HIGH << 8) + U1STA_LOW    
>>>>>>> uart1-test

#ifdef	__cplusplus
}
#endif

#endif	/* PIC24F04KL101_H */

