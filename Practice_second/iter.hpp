template<class T1> // ������, ��� ������ ������������ ��� ����������� ���������� �� ����� ������ �������
void iter(T1 *array, int size, T1 (*foo)(T1)) {
	for (int i = 0; i < size; ++i) {
		array[i] = foo(array[i]);
	}
}
