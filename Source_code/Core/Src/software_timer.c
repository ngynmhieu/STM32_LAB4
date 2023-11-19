/*
 * software_timer.c
 *
 *  Created on: Nov 18, 2023
 *      Author: Minh Hieu
 */


#include "software_timer.h"

int timer_flag[5];
int timer_counter[5];

void setTimer(int duration, int index){
	timer_counter[index] = duration;
	timer_flag[index] = 0;
}

void timerRun(){
	for (int i = 0; i<5; i++){
		if (timer_counter[i] > 0){
			timer_counter[i]--;
			if (timer_counter[i] == 0){
				timer_flag[i] = 1;
			}
		}
	}
}
