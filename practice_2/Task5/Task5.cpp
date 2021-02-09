#include <iostream>
#include <math.h>
int main() {
	using namespace std;
	setlocale(LC_ALL, "rus");
	double V, S, h, R, r, l;
	cout << "Введите значения для нахождения обЪема(V): ";
	cout << "Введите значение высоты(h): ";
	cin >> h;
	cout << "Введите значение рад.осн(R): ";
	cin >> R;
	cout << "Введите значение рад.верш(r): ";
	cin >> r;
	
	V = 1/3 * 3.14 * h * (R * R + r * r + R * r);
	if (V >= 0) cout << "Объем Равен: " << V; 
		else cout << "Логическая ошибка";

	cout << "Введите значения для нахождения площади(S): ";
	cout << "Введите значение длины образующей(l): ";
	cin >> l;
	
	S = 3.14 * (R + r) * l + 3.14 * R * R + 3.14 * r * r;
	if (S >= 0) cout << "Значение площади(S): " << V; 
		else cout << "Логическая ошибка";
	
	return 0;
}
