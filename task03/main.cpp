#include "golf.h"

int main()
{
	golf g1;

	setGolf(g1, "Dandy", 38);
	showGolf(g1);

	golf g2;
	setGolf(g2);
	showGolf(g2);
	
	handicap(g2, 0);
	showGolf(g2);

	return 0;
}