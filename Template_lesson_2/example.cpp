#include <iostream>
#include <string>
#include <complex>

using namespace std;

int main() {
	template<typename T>
	//—оздаЄм шаблонную функцию
	T do_something(T x) {
		return(++x);
	}
	//явна€ специализаци€ дл€ типа double
	//–езультат выполнени€ функуции d_s при подстановки переменных типа double будет отличатьс€ от шаблонной функции
	template<>
	double do_something<double>(double x) {
		return(x / 2);
	}
	do_something(3);
	do_something(3.0);
	return 0;
}