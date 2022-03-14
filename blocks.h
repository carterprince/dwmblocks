//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	//{"", "xmr",							1000,		0},
	{" ", "wordle",							20,		10},
	{"", "classchange",					1,		0},
	{" ", "volume get; printf '%%'",					100,		12},
	{" ", "date '+%a %b %d'",					200,		0},
	{" 🕒 ", "date '+%I:%M %p '",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " │";
static unsigned int delimLen = 5;
