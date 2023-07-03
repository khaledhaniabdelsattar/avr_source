/*
 * timer1_interfacing.c
 *
 *  Created on: Jun 19, 2023
 *      Author: Khaled
 */

#include "timer1_interfacing.h"
void select_timer1_mode(timer1_modes mode)
{

	switch(mode)
	{

	case Fast_PWM_timer1:

		CLEAR_BIT(Timer1Control_Register_A,0);
		SET_BIT(Timer1Control_Register_A,1);
		SET_BIT(Timer1Control_Register_B,3);
		SET_BIT(Timer1Control_Register_B,4);
		break;

    }

}


void start_timer1(timer1_prescalers prescaler)
{


		Timer1Control_Register_B =Timer1Control_Register_B |prescaler;

}

void timer_1_write_on_ctc_reg(u16 preload)
{


	Timer1_Output_Compare_Register_A= preload;

}


void select_output_pwm_mode_timer1 (pwm_mode_timer1 wave)
{

	Timer1Control_Register_A|=wave<<6;

}

void timer_1_write_on_Icu_reg(u16 preload)
{

	Timer1_Input_Capture_Register =preload;

}
