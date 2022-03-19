
#include <stdio.h>

#include "intro.h"

void con_INTRO(){
	printf("con_INTRO\n");
};

void upd_INTRO(){
	printf("upd_INTRO\n");
	gs.des_state = CLOSE;
};

void dec_INTRO(){
	printf("dec_INTRO\n");
};
