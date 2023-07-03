/*
 * timer1_types.h
 *
 *  Created on: Jun 19, 2023
 *      Author: Khaled
 */

#ifndef TIMER1_TYPES_H_
#define TIMER1_TYPES_H_


typedef enum
{

 Normal_Mode_timer1=0,
 PWM_Phase_correct_Mode_timer1=64,
 CTC_Mode_timer1=8,
 Fast_PWM_timer1=72

} timer1_modes;

typedef enum
{
	timer1_stop_timer1,
	start_timer1_with_1_prescaler,
	start_timer1_with_8_prescaler,
	start_timer1_with_64_prescaler,
	start_timer1_with_256_prescaler,
	start_timer1_with_1024_prescaler,
	start_timer1_with_external_clock_falling_edge,
	start_timer1_with_external_clock_rising_edge,

}timer1_prescalers;
typedef enum
{

	non_inverting_timer1=2,
	inverting_timer1=3

}pwm_mode_timer1;

#endif /* TIMER1_TYPES_H_ */
