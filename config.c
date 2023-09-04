#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
	{"[ -f ~/.timer ] && cat ~/.timer",		10,		11},
	{"classchange",			5,		11},
	{"volume get",			100,	2},
	{"battery",				60,		11},
	{"date '+%a %b %d, %I:%M %p'",	5,	11},
};

const unsigned short blockCount = LEN(blocks);
