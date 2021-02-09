#include <iostream>
int main() {

	setlocale(LC_ALL, "rus");
	using namespace std;
	char name;

	cout << "Enter name" << endl;
	cin >> name;
	cout << "Hello: " << name <<endl;
	return 0;
}
