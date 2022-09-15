#include <iostream>
#include "swap.hpp"
#include <string>
#include <complex>

int main()
{
	int i = 42;
	int n = 7;
	swap(&n, &i);
	std::cout << "swap(7, i): " << i << '\n'; // Ўаблон принимает два числовых (instantaition int) значени€ и возвращает наибольшее значение (instance)
/*
	double e = 2.71;
	double pi = 3.14;
	std::cout << "max(e, pi): " << ::max(e, pi) << '\n'; // Ўаблон принимает два числовых значени€ с плавающуй точкой двойной точности и возвращает наибольшее

	std::string s1 = "math";
	std::string s2 = "mathematics";
	std::cout << "max(s1, s2): " << ::max(s1, s2) << '\n'; // Ўаблон принимает два строковых значени€ и возвращает наибольшее
*/
}