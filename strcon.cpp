#include <iostream>
using namespace std;
int main()
{
    string str1, str2, result;
    cout << "Enter string str1: ";
    getline (cin, str1);
    cout << "Enter string str2: ";
    getline (cin, str2);
    result = str1 + str2;
    cout << "Resultant String = "<< result;
    return 0;
}
