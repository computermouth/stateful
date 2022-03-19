
#include <stdio.h>
#include <stdlib.h>

#include "close.h"

void con_CLOSE(){
	printf("con_CLOSE\n");
};

void upd_CLOSE(){
	printf("upd_CLOSE\n");
	gs.des_state = END_STATE;
};

void dec_CLOSE(){
	printf("dec_CLOSE\n");
	exit(0);
};
