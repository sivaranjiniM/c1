#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
 void space(string& str)
{
    int count = 0;
    int length = str.length();
    for (int i = 0; i < length; i++) {
        int c = str[i];
        if (isspace(c))
        
            count++;
    }
    cout << count;
}
 int main()
{
    string str = "hello world";
    space(str);
    return 0;
}
