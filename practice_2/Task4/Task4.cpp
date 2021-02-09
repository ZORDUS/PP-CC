#include <iostream>
int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");
    
    int a, b, c;
    double x1, x2;
    double discr;
    
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    discr = b * b - 4 * a * c;
    
    if (discr < 0)
        cout << "discr is negative";
    else
        x1 = (-b + sqrt(discr)) / (2 * a);
        x2 = (-b - sqrt(discr)) / (2 * a);
    
        cout << "x1 Первый корень равен: " << " " << x1 << endl;
        cout << "x2 Второй корень равен:" << " " << x2 << endl;
    return 0;
}
