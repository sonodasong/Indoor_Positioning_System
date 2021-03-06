#ifndef __I2CDEV_H__
#define __I2CDEV_H__

#include "define.h"

#define pgm_read_byte(n)		*(n)

int8 readBit(uint8 devAddr, uint8 regAddr, uint8 bitNum, uint8 *data);
int8 readBitW(uint8 devAddr, uint8 regAddr, uint8 bitNum, uint16 *data);
int8 readBits(uint8 devAddr, uint8 regAddr, uint8 bitStart, uint8 length, uint8 *data);
int8 readBitsW(uint8 devAddr, uint8 regAddr, uint8 bitStart, uint8 length, uint16 *data);
int8 readByte(uint8 devAddr, uint8 regAddr, uint8 *data);
int8 readWord(uint8 devAddr, uint8 regAddr, uint16 *data);
int8 readBytes(uint8 devAddr, uint8 regAddr, uint8 length, uint8 *data);
int8 readWords(uint8 devAddr, uint8 regAddr, uint8 length, uint16 *data);

boolean writeBit(uint8 devAddr, uint8 regAddr, uint8 bitNum, uint8 data);
boolean writeBitW(uint8 devAddr, uint8 regAddr, uint8 bitNum, uint16 data);
boolean writeBits(uint8 devAddr, uint8 regAddr, uint8 bitStart, uint8 length, uint8 data);
boolean writeBitsW(uint8 devAddr, uint8 regAddr, uint8 bitStart, uint8 length, uint16 data);
boolean writeByte(uint8 devAddr, uint8 regAddr, uint8 data);
boolean writeWord(uint8 devAddr, uint8 regAddr, uint16 data);
boolean writeBytes(uint8 devAddr, uint8 regAddr, uint8 length, uint8 *data);
boolean writeWords(uint8 devAddr, uint8 regAddr, uint8 length, uint16 *data);

void mpu6050IRQInit(void);
void mpu6050IRQEnable(void);
void mpu6050IRQDisable(void);
void mpu6050IRQClear(void);

#endif
