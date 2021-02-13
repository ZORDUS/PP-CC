#include <iostream>

int main()
{
    using namespace std;

    float x, b, c;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    x = -c / b;
    cout << "x = -c / b: "
         << " " << x << endl;

    return 0;
}
