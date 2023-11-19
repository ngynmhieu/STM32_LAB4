/*
 * software_timer.h
 *
 *  Created on: Nov 18, 2023
 *      Author: Minh Hieu
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag[];
void setTimer(int duration, int index);
void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
