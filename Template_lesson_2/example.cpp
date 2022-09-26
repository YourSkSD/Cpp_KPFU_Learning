#include <iostream>
#include <string>
#include <complex>

using namespace std;

int main() {
	template<typename T>
	//������ ��������� �������
	T do_something(T x) {
		return(++x);
	}
	//����� ������������� ��� ���� double
	//��������� ���������� �������� d_s ��� ����������� ���������� ���� double ����� ���������� �� ��������� �������
	template<>
	double do_something<double>(double x) {
		return(x / 2);
	}
	do_something(3);
	do_something(3.0);
	return 0;
}