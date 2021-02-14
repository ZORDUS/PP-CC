#include <iostream>
#include <fstream>
#include <string>
int main()
{
	using namespace std;
	ifstream f;
	string str;

	f.open("C:\\Users\\kiril\\OneDrive\\Desktop\\Helloworld.txt");
    {
        while (getline(f, str))
        {
            cout << str << endl;
        }
    }
    f.close();     

    cout << "End of program" << endl;
    return 0;
}
