#include <iostream>

int main()
{
    using namespace std;
    
    int val = 0;
    int current = 0;
    int max = 0;
    int number;
    int counter;

    cout << "enter a natural number (0 if done): ";

    if (cin >> current) {
        counter = 1;

        while (cin >> val) {
            if (val == 0)
                break;
            if (current == val) {
                counter++;
                if (counter > max)
                    max = counter;
                number = val;
            }
            else {
                current = val;
                counter = 1;
            }
        }

    }

    cout << " longest sequence: " << max << " number: " << number << endl;

    system("pause");


    return 0;
}




