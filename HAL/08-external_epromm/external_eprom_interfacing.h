/*
 * external_eprom_interfacing.h
 *
 *  Created on: Jul 10, 2023
 *      Author: Khaled
 */

#ifndef EXTERNAL_EPROM_INTERFACING_H_
#define EXTERNAL_EPROM_INTERFACING_H_

#include "i2c_driver_interfacing.h"
#include "lcd_interfacing.h"

void Eeprom24C16_Init(void);
void Eeprom24C16_WriteByte(u16 addr, u8 data);
u8 Eeprom24C16_ReadByte(u16 addr);


#endif /* EXTERNAL_EPROM_INTERFACING_H_ */
