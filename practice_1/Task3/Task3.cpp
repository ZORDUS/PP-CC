#include <iostream>
int main() 
{   using namespace std;
    setlocale(LC_ALL, "rus");
    float x, b, c;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter c:";
    cin >> c;
    x = (-c) / b;
    cout << "x ðàâíÿåòñÿ:" << " " << x << endl;
    return 0;
}
