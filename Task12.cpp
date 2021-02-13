#include <iostream>
#include <math.h>

int main() 
{
    using namespace std;

    int a, t;
    float p, m, s;

    cout << "Loan amount (RUB): " << endl;
    cin >> a;
    cout << "Period (number of years): " << endl; 
    cin >> t;
    cout << "Percent: " << endl;
    cin >> p;

    p = p / 100;
    m = (a * p * pow((1 + p), t)) / (12 * (pow(1 + p, t) - 1));
    s = m * 12 * t;
    
    cout << "Monthly payments: rub.\nTotal will be paid: rubles.\n" << m << s << endl;
    
    return 0;
}