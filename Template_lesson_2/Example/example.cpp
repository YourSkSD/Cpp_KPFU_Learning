#include <iostream>
#include <string>
#include <complex>

using namespace std;



int main() {
	
	complex x = new complex(float re = 4.0f, float im = 1.0f);
	output(x);
	//����� ������������� ��� ���� double
	//��������� ���������� �������� d_s ��� ����������� ���������� ���� double ����� ���������� �� ��������� �������

	return 0;
}

template <type T>
T output(T x) {
	cout << x << endl;
}