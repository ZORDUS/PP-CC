#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	double w, x, a;
	cout << "��� ���������� �������� 'w' �������� ����������";
	cout << "������� 'x':";
	cin >> x;
	cout << "������� 'a':";
	cin >> a;
	if (x < 1)
	{
		w = a * log(abs(x));
		cout << "�������� 'w':" << w;
	}
	else if (a - x * x >= 0)
	{
		w = sqrt(a - x * x);
		cout << "�������� 'w':" << w;
	}
	else
		cout << "��� �����";
	return 0;
}