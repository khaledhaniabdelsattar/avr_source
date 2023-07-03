/*
 * timer1_interfacing.h
 *
 *  Created on: Jun 19, 2023
 *      Author: Khaled
 */

#ifndef TIMER1_INTERFACING_H_
#define TIMER1_INTERFACING_H_
#include "bitmath.h"
#include "std_types.h"
#include "timer1_types.h"
#include "timer1_registers.h"

void select_timer1_mode(timer1_modes mode);
void start_timer1(timer1_prescalers prescaler);
void timer1_preload(u8 preload);
void timer_1_write_on_ctc_reg(u16 preload);
void timer_1_write_on_Icu_reg(u16 preload);
void stop_timer0();
void select_output_pwm_mode_timer1(pwm_mode_timer1 wave);



#endif /* TIMER1_INTERFACING_H_ */
