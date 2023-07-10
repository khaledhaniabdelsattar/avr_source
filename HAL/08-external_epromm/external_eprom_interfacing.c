/*
 * external_eprom_interfacing.c
 *
 *  Created on: Jul 10, 2023
 *      Author: Khaled
 */

#include "external_eprom_interfacing.h"

u8 temp;

void Eeprom24C16_Init(void)
{
	I2C_MasterInit();
}

void Eeprom24C16_WriteByte(u16 addr, u8 data)
{
	u8 loc_pageNo = (addr/256);
	u8 loc_byteNo = (addr%256);
	go_to_xy(0, 0);
	//lcd_display_number_onebyte(loc_pageNo);
	go_to_xy(0, 8);
	//lcd_display_number_onebyte(loc_byteNo);
	I2C_StartCondition();
	//go_to_xy(1, 0);
	I2C_Send_SlaveAddressWriteOperation(0x01010| ( ( addr & 0x0700 ) >> 8 ));
	//I2C_Send_SlaveAddressWriteOperation(0b1010000);
	//go_to_xy(1, 0);
	I2C_WriteByte(loc_byteNo);
	//I2C_WriteByte(addr);
	//go_to_xy(1, 0);
	I2C_WriteByte(data);
	//go_to_xy(1, 0);
	I2C_StopCondition();
	_delay_ms(10);
}


u8 Eeprom24C16_ReadByte(u16 addr)
{
	u8 loc_pageNo = (addr/256);
	u8 loc_byteNo = (addr%256);
	u8 loc_dataRead=0;
	I2C_StartCondition();
	I2C_Send_SlaveAddressWriteOperation(0x01010 | ( ( addr & 0x0700 ) >> 8 ) );
	I2C_WriteByte(loc_byteNo);
	//I2C_Send_SlaveAddressWriteOperation(0b1010000);
	//I2C_WriteByte(addr);
	I2C_RepeatedStartCondition();
	I2C_Send_SlaveAddressReadOperation(0x01010 | ( ( addr & 0x0700 ) >> 8 ));
	//I2C_Send_SlaveAddressReadOperation(0b1010000);
	loc_dataRead = I2C_ReadByte();
	I2C_StopCondition();
	return loc_dataRead;
}
