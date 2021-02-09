#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	double w, x, a;
	cout << "для вычисления значения 'w' введеите переменные";
	cout << "Введите 'x':";
	cin >> x;
	cout << "Введите 'a':";
	cin >> a;
	if (x < 1)
	{
		w = a * log(abs(x));
		cout << "Значения 'w':" << w;
	}
	else if (a - x * x >= 0)
	{
		w = sqrt(a - x * x);
		cout << "Значения 'w':" << w;
	}
	else
		cout << "Иди воруй";
	return 0;
}