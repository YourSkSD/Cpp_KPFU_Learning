#include <iostream>
#include <string>
#include "My_complex.h"

using namespace std;

void new_abs(int x) {
	if (x < 0) {
		std::cout << -x << std::endl;
	}
	else {
		std::cout << x << std::endl;
	}
}

Complex() {};

Complex(double r) // конструктор по умолчанию
{
	re = r;
	im = 0;
}

Complex(double r, double i) // конструктор по умолчанию
{
	re = r;
	im = i;
}

template <typename T>
void new_abs(T x) {
	if (x < 0) {
		std::cout << -x << std::endl;
	}
	else {
		std::cout << x << std::endl;
	}
}



int main() {

	return 0;
}