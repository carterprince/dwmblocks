#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
	{"[ -f ~/.timer ] && cat ~/.timer",		10,		11},
	{"classchange",			5,		11},
	{"volume get",			100,	2},
	{"echo \"$(cat /sys/class/power_supply/BAT0/capacity)% 🔋\"",				60,		11},
	{"date '+%a %b %d, %I:%M %p'",	5,	11},
};

const unsigned short blockCount = LEN(blocks);
