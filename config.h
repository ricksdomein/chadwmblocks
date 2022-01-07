//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"sb-torrent",		30,	9},
        {"",	"sb-nettraf",		1,	10},
        {"",	"sb-disk",		30,	11},
        {"",	"sb-disk $HOME",	30,	12},
        {"",	"sb-rss",         	0,      8},
        {"",	"sb-updates",		3600,   7},
        {"",	"sb-backlight",   	0,      6},
        {"",	"sb-battery",    	1,      5},
        {"",	"sb-cpu",        	1,      4},
        {"",	"sb-mem",        	1,      3},
        {"",	"sb-mic",      		0,      13},
        {"",	"sb-vol",      		0,      2},
        {"",	"sb-clock",       	0,      1},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "  ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }

