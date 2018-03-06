#include <iostream>
#include <string>
using namespace std;
void append(string str)
{
    str.append(1, '.');
    cout << "After append : ";
    cout << str;
    }
int main()
{
    string str("vishalrknagar");
    cout << "Original String : " << str << endl;
    append(str);
    return 0;
}
