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
        continue;
        else
            count++;
    }
    cout << count;
}
 int main()
{
    string str = "laptop is good";
    space(str);
    return 0;
}
