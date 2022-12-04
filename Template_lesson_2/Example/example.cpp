#include <iostream>
#include <string>
#include <complex>

using namespace std;



int main() {
	
	complex x = new complex(float re = 4.0f, float im = 1.0f);
	output(x);
	//явная специализация для типа double
	//результат выполнения функуции d_s при подстановки переменных типа double будет отличаться от шаблонной функции

	return 0;
}

template <type T>
T output(T x) {
	cout << x << endl;
}