#include <iostream>
#include "iter.hpp"
#include <string>
#include <complex>

int main()
{
	int const SIZE = 5;
	int array[SIZE]{1, 2, 3, 4, 5};
	iter<int>(array, SIZE, [](int a) {return ++a; });
	for (int i = 0; i < SIZE; ++i) {
		std::cout << array[i] << '\n';
	}
}