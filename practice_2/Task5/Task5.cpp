#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	double V, S, h, R, r, l;
	cout << "������� �������� ��� ���������� ������(V): ";
	cout << "������� �������� ������(h): ";
	cin >> h;
	cout << "������� �������� ���.���(R): ";
	cin >> R;
	cout << "������� �������� ���.����(r): ";
	cin >> r;
	V = 0.33 * 3.14 * h * (R * R + r * r + R * r);
	if (V >= 0) cout << "����� �����: " << V; else cout << "���������� ������";

	cout << "������� �������� ��� ���������� �������(S): ";
	cout << "������� �������� ����� ����������(l): ";
	cin >> l;
	S = 3.14 * (R + r) * l + 3.14 * R * R + 3.14 * r * r;
	if (S >= 0) cout << "�������� �������(S): " << V; else cout << "���������� ������";
	return 0;
}