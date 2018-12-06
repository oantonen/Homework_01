#include <iostream>
constexpr int Len = 40;
int main(int argc, char const *argv[])
{
	std::cout << "Please, enter the name (MAX 39 symbols):" << std::endl;
	int i = 0;
	char nm[Len] = "";

		std::cout << "slash 0";
	while (i < Len - 1 && std::cin.peek() != '\n')
	{
		std::cin >> nm[i];
		i++; 
	}

	std::cout << "Please, enter the handicap (integer):" << std::endl;
	int hd = -1;
	std::cin >> hd;
	std::cout << "string is="; 
	std::cout << nm << std::endl;
	std::cout << hd;
	return 0;
}