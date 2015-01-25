#include "inset.h"
#include "plotter.h"

int up(int argc, char argv[16][16]) {
	hand_up();
	return 0;
}

int down(int argc, char argv[16][16]) {
	hand_down();
}

int point(int argc, char argv[16][16]) {
	if(argc < 3) return 1;
	set_xy(strtod(argv[1], NULL), strtod(argv[2], NULL));
	return 0;
}