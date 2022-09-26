#include <iostream>
#include "new_swap.hpp"
#include "new_max.hpp"
#include "new_min.hpp"
#include <string>
#include <complex>

int main()
{
	int i = 42;
	int n = 7;
	::swap(&n, &i);
	std::cout << "swap(7, i), i became: " << i << '\n' 
		<< "max after swap: " << ::max(n, i) << '\n' 
		<< "min after swap: " << ::min(n, i) << '\n';

	double e = 2.71;
	double pi = 3.14;
	::swap(&e, &pi);
	std::cout << "swap(e, pi), pi became: " << pi << '\n'
		<< "max after swap: " << ::max(e, pi) << '\n'
		<< "min after swap: " << ::min(e, pi) << '\n';

	std::string s1 = "math";
	std::string s2 = "mathematics";
	::swap(&s1, &s2);
	std::cout << "swap(s1, s2), s1 became: " << s1 << '\n'
		<< "max after swap: " << ::max(s1, s2) << '\n'
		<< "min after swap: " << ::min(s1, s2) << '\n';
}