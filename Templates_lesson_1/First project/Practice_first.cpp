#include <iostream>
#include "swap.hpp"
#include <string>
#include <complex>

int main()
{
	int i = 42;
	int n = 7;
	swap(&n, &i);
	std::cout << "swap(7, i): " << i << '\n'; // ������ ��������� ��� �������� (instantaition int) �������� � ���������� ���������� �������� (instance)
/*
	double e = 2.71;
	double pi = 3.14;
	std::cout << "max(e, pi): " << ::max(e, pi) << '\n'; // ������ ��������� ��� �������� �������� � ��������� ������ ������� �������� � ���������� ����������

	std::string s1 = "math";
	std::string s2 = "mathematics";
	std::cout << "max(s1, s2): " << ::max(s1, s2) << '\n'; // ������ ��������� ��� ��������� �������� � ���������� ����������
*/
}