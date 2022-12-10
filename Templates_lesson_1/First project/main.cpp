#include <iostream>
#include "my_max.hpp"
#include <string>
#include <complex>

void first_ex() {
	int i = 42;
	std::cout << "max(7, i): " << ::max(7, i) << '\n'; // ������ ��������� ��� �������� (instantaition int) �������� � ���������� ���������� �������� (instance)
}

void sec_ex() {
	double e = 2.71;
	double pi = 3.14;
	std::cout << "max(e, pi): " << ::max(e, pi) << '\n'; // ������ ��������� ��� �������� �������� � ��������� ������ ������� �������� � ���������� ����������
}

void third_ex() {
	std::string s1 = "math";
	std::string s2 = "mathematics";
	std::cout << "max(s1, s2): " << ::max(s1, s2) << '\n'; // ������ ��������� ��� ��������� �������� � ���������� ����������
}

void complex_ex() {
	std::complex<float> c1(1, 2);
	std::complex<float> c2(1, 3);
	::max(c1, c2); //������� ������ ������� ����������, �.�. ��� ���� complex �� �������� �������� ��������� (������������ � ::max)
}
template <typename T>
void two_stage_broadcast(T t) {
	//����������� ����������
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