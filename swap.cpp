#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    b = a + b;
    a = b - a;
    b = b - a;
}
 int main()
{
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;
}
