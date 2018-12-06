#include "golf.h"
#include <iostream>

void setGolf(golf& g, const char* name, int hc)
{
	int i = 0;
	while (name[i] && i < Len - 1)
	{
		g.fullname[i] = name[i];
		i++;
	}
	g.fullname[i] = '\0';
	g.handicap = hc;
}

int setGolf(golf& g)
{
	std::cout << "Please, enter the name (MAX 39 symbols):" << std::endl;
	int i = 0;
	char nm[Len] = "";
	while (i < Len - 1 && std::cin.peek() != '\n')
	{
		std::cin >> nm[i];
		i++; 
	}
	if (nm[0] == '\0')
		return 0;

	std::cout << "Please, enter the handicap (integer):" << std::endl;
	int hd = 0;
	std::cin >> hd;

	setGolf(g, nm, hd);

	return 1;
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showGolf(const golf& g)
{
	std::cout << "golf name: " 
			<< g.fullname 
			<< ", golf handicap: " 
			<< g.handicap << std::endl;

}
