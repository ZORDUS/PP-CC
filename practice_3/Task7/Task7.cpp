#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int a, b, f, x;
	cout << "Введите цифры a, b è f: " << endl;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "f= ";
	cin >> f;
	cout << "Вычисляем по формуле: x=(a + b - f / a) + f * a * a - (a + b)" << endl;
	x = (a + b - f / a) + f * a * a - (a + b);
	cout << "x= " << x << endl;
	return 0;
}
/*Запрограммировать следующее выражение: (а + b — f / а) + f * a * a — (a + b) Числа а, b, f вводятся с клавиатуры. Организовать пользовательский интерфейс, таким образом, чтобы было понятно, в каком порядке должны вводиться числа.
