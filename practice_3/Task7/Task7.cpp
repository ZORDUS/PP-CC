#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, f, x;
	cout << "������� ����� a, b � f: " << endl;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "f=";
	cin >> f;
	cout << "��������� �� �������: x=(a + b - f / a) + f * a * a - (a + b)" << endl;
	x = (a + b - f / a) + f * a * a - (a + b);
	cout << "x=" << x << endl;
	system("pause>>void");
	return 0;
}
/* ����������������� ��������� ���������: (� + b � f / �) + f * a * a � (a + b) ����� �, b, f �������� � ����������. ������������ ���������������� ���������, ����� �������, ����� ���� �������, � ����� ������� ������ ��������� �����.*/