#include <iostream>
#include <fstream>
#include <cstring>

int main() 
{
    using namespace std;
    
    ofstream f("file.txt");
   
    int s[10] = { 1,2,3,4,5,9,3,7,4,8 };
    for (int i = 0; i < 10; i++)
    {
        f << s[i] << " ";
    }
    f.close();
    
    int ar[10];
    int sum = 0;
    
    ifstream fin("file.txt");
    
    for (int i = 0; i < 10; i++, sum += ar[i]);
    cout << sum;
    
    return 0;
}