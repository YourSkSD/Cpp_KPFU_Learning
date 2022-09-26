template<class T1> // Шаблон, тип данный определяется при подстановке переменных во время вызова функции
T1 my_sqrt(T1 a) {
	T1 L = 0, R = a;
	T1 M = (L + R) / 2;
	while (R - L > 1) {
		if (M * M <= a) {
			L = M;
		}
		else {
			R = M;
		}
		M = (L + R) / 2;
	}
	return M;
}