#include<iostream>
using namespace std;
int main()
{
    long n,rev=0,a;
    cout<<"Enter any number:\n";
    cin>>n;
    while(n!=0)
    {
        a=n%10;
        rev=(rev*10)+a;
        n=n/10;
    }
    cout<<"The reversed number is "<<rev;
    return 0;
}
