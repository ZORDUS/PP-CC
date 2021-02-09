#include <iostream>

int main()
{
    using namespace std;
    float a, b;
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;
    cout << "Summa: " << a + b << endl
        << "Raznost: " << a - b << endl
        << "Proizvedenie: " << a * b << endl;
    if (b == 0)
        cout << "Division by zero!";
    else
        cout << "Chastnoe: " << a / b << endl;
}
