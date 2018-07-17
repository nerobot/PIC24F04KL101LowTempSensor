/* 
 * File:   i2c1.h
 * Author: stevend
 *
 * Created on 17 July 2018, 07:55
 */

#ifndef I2C1_H
#define	I2C1_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#define READ_CMD        1
#define WRITE_CMD       0

void i2cInit(uint8_t sspAdd);                                     //! Initialises the i2c (1) module
void i2cReady();
void i2c_Wait();
uint8_t i2cAddress(uint8_t address, uint8_t mode);  //! Send the address (+ R/W bit) byte. Comes after start, but before write / read
uint8_t i2cWrite(uint8_t data);                     //! Send the data byte and wait for acknowledgement
uint8_t i2cStart();                                 //! Send the start bit
void i2cRestart();                                  
uint8_t i2cStop();                                  //! Send the stop bit
void i2cAck();
void i2cNack();
uint8_t i2cRead(uint8_t ack);                       //! Read a single byte from the slave
uint16_t i2cRead16Bit(uint8_t address, uint8_t reg);    //! Reads a 16bit word from the i2c module
void i2cWrite16Bit(uint8_t address, uint8_t reg, uint16_t data);    //! Writes a 16bit word to the i2c module


#ifdef	__cplusplus
}
#endif

#endif	/* I2C1_H */

