#include <iostream>
#include "my_sqrt.hpp"
#include <string>

int main()
{
	int number = 48;
	std::cout << ::my_sqrt(number) << '\n';
	return 0;
}