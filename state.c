
#include <stdio.h>

#include "state.h"

#include "intro.h"
#include "close.h"

void xxx_DUMMY(){printf("dummy\n");};

const state_table_item_t state_table[END_STATE] = {
	{ .state = NO_STATE, .con = xxx_DUMMY, .upd = xxx_DUMMY, .dec = xxx_DUMMY },
	{ .state = INTRO,    .con = con_INTRO, .upd = upd_INTRO, .dec = dec_INTRO },
	{ .state = CLOSE,    .con = con_CLOSE, .upd = upd_CLOSE, .dec = dec_CLOSE },
};
