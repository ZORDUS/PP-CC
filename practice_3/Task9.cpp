#include <iostream>

int main()
{
	using namespace std;

	double N, C;
	
	cout << "Enter 'N': ";
	cin >> N;
	C = N;
	
	while (C - N < 10)
	{
		C++;
		cout << C << endl;
	}
	
	return 0;
}
