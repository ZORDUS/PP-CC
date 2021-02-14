#include <iostream>

int main()
{
    using namespace std;

    double a, b;
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;

    cout << "Sum: " << a + b << endl
         << "Вifference: " << a - b << endl
         << "Product: " << a * b << endl;
    if (b == 0)
        cout << "Division by zero!";
    else
        cout << "Quotient: " << a / b << endl;
}
