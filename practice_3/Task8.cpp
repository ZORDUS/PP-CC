#include <iostream>
#include <math.h>

int main()
{
	using namespace std;

	double z, x, y, b;

	cout << "to calculate 'z' enter variables \n";
	
	cout << "Enter 'b': ";
	cin >> b;
	cout << "Enter 'y' :";
	cin >> y;
	cout << "Enter 'x': ";
	cin >> x;

	if ((b - y) > 0 && (b - x) >= 0)
	{
		z = log(b - y) * sqrt(b - x);
		cout << "The value 'z' = " << z;
	}
	else
		cout << "No solution found";

	return 0;
}
