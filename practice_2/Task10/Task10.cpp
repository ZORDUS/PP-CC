#include <iostream>
#include <math.h>

int main()
{
	using namespace std;

	double x, y, i;

	for (x = -4; x <= 4; x += 0.5)
	{
		if (x - 1 != 0)
		{
			y = (x * x - 2 * x + 2) / (x - 1);
			cout << y << endl;
		}
		else
			cout << "No values" << endl;
	}


	return 0;
}