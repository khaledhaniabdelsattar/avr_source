/*
 * timer1_registers.h
 *
 *  Created on: Jun 19, 2023
 *      Author: Khaled
 */

#ifndef TIMER1_REGISTERS_H_
#define TIMER1_REGISTERS_H_

#include "std_types.h"

#define Timer1_TIMSK_reg                             (*(volatile u8*)(0x59))
#define Timer1Control_Register_A                     (*(volatile u8*)(0x4F))
#define Timer1Control_Register_B                     (*(volatile u8*)(0x4E))
#define TimerCounter1_Counter_Register               (*(volatile u16*)(0x4C))
#define Timer1_Output_Compare_Register_A             (*(volatile u16*)(0x4A))
#define Timer1_Input_Capture_Register                 (*(volatile u16*)(0x46))



#endif /* TIMER1_REGISTERS_H_ */
