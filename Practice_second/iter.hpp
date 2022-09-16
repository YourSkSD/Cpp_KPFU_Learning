template<class T1> // Шаблон, тип данный определяется при подстановке переменных во время вызова функции
void iter(T1 *array, int size, T1 (*foo)(T1)) {
	for (int i = 0; i < size; ++i) {
		array[i] = foo(array[i]);
	}
}
