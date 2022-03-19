
#ifndef _STATE_H_
#define _STATE_H_

typedef enum {
	NO_STATE,
	INTRO,
	CLOSE,
	END_STATE
} state_t;

typedef struct {
	state_t state;
	void (*con)();
	void (*upd)();
	void (*dec)();
} state_table_item_t;

typedef struct {
	state_t cur_state;
	state_t des_state;
} game_state_t;

extern game_state_t gs;
extern const state_table_item_t state_table[END_STATE];

#endif
