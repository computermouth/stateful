
#include <stdio.h>
#include <stdint.h>

#include "intro.h"

uint8_t counter;

void con_INTRO(){
	printf("con_INTRO\n");
	counter = 0;
};

void upd_INTRO(){
	printf("upd_INTRO: %u\n", counter);
	counter++;
	if (counter > 5)
		gs.des_state = CLOSE;
};

void dec_INTRO(){
	printf("dec_INTRO\n");
	counter = 0;
};
