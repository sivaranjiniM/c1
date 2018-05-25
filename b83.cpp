#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    char x;
    cout<<"Enter the number"<<endl;
    cin>>a>>x>>b;
    if(x=='/')
    {
    c=a/b;
    cout<<c;
    }
    else
    {
    c=a%b;
    cout<<c;
    }
    return 0;
}
