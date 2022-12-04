#include <iostream>
#include <string>
#include <complex>

using namespace std;

template <typename T>
void whatami(T&& x) {
	std::cout << " something undenstandable" << std::endl;
}
class C {};

template <typename T>
void output(T x) {
	cout << real(x) << imag(x) << endl;
}

void whatami(...) {
	std::cout << "anything" << std::endl;
}

template <typename T>
T do_something(T x) {
	return(++x);
}

template<>
double do_something<double>(double x) {
	return(x / 2);
}

void whatami(int x) {
	std::cout << x << " type int" << std::endl;
}

void whatami(double x) {
	std::cout << x << " type double" << std::endl;
}

void whatami(long x) {
	std::cout << x << " type long" << std::endl;
}

template <typename T>
void whatami(T* x) {
	std::cout << x << " pointer" << std::endl;
}

int main() {
	
	std::complex<double> x = {3, 4};
	output(x);

	int z = do_something(3);
	cout << endl << z << endl;
	double e = do_something(5.);
	cout << e << endl;

	whatami(5);

	int i = 5;

	whatami(i + 1);
	whatami(&i);

	C c;
	whatami(c);
	whatami(&c);

	int a = 19;
	float xe = 2.4;
	whatami(a);
	whatami(xe);
	//явная специализация для типа double
	//результат выполнения функуции d_s при подстановки переменных типа double будет отличаться от шаблонной функции

	return 0;
}