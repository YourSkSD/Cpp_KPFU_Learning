#include <iostream>
#include "my_max.hpp"
#include <string>
#include <complex>

void first_ex() {
	int i = 42;
	std::cout << "max(7, i): " << ::max(7, i) << '\n'; // Ўаблон принимает два числовых (instantaition int) значени€ и возвращает наибольшее значение (instance)
}

void sec_ex() {
	double e = 2.71;
	double pi = 3.14;
	std::cout << "max(e, pi): " << ::max(e, pi) << '\n'; // Ўаблон принимает два числовых значени€ с плавающей точкой двойной точности и возвращает наибольшее
}

void third_ex() {
	std::string s1 = "math";
	std::string s2 = "mathematics";
	std::cout << "max(s1, s2): " << ::max(s1, s2) << '\n'; // Ўаблон принимает два строковых значени€ и возвращает наибольшее
}

void complex_ex() {
	std::complex<float> c1(1, 2);
	std::complex<float> c2(1, 3);
	::max(c1, c2); //получим ошибку времени компил€ции, т.к. дл€ типа complex не определЄн оператор сравнени€ (используемый в ::max)
}
template <typename T>
void two_stage_broadcast(T t) {
	//двухэтапна€ трансл€ци€
	static_assert(sizeof(int) > 6, "int is too small");
	static_assert(sizeof(T) > 6, "T is too small");
}

int main()
{
	//first_ex();
	//sec_ex();
	//third_ex();
	//complex_ex();
	float t = 54.;
	two_stage_broadcast(& t);
}