#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    int x, b, c;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter c:";
    cin >> c;
    x = (-c) / b;
    cout << "x равняется:" << " " << x << endl;
    return 0;
}