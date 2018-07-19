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
#define XTAL_FREQ       8000000UL           // Raw oscillator freq
#define FCY             XTAL_FREQ / 2       // Most but not all PIC24s
    
#define LED_TRIS        TRISBbits.TRISB7    // Used for debugging and initial testing
#define LED             LATBbits.LATB7

#ifdef	__cplusplus
}
#endif

#endif	/* PIC24F04KL101_H */

