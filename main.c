
#include <stdio.h>
#include <stdlib.h>

#include "state.h"

game_state_t gs;

int main(){
	
	gs.cur_state = NO_STATE;
	gs.des_state = INTRO;
	
	while(1){
		
		if (gs.cur_state != gs.des_state) {
			state_table[gs.cur_state].dec();
			state_table[gs.des_state].con();
			gs.cur_state = gs.des_state;
		}
		
		state_table[gs.cur_state].upd();
	}
	
	return 0;
}
