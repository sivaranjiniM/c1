#include <iostream>
using namespace std;
int main()
{
    float a;
    int b;
    cout<<"enter the number:"<<endl;
    cin>>a;
    if(a<0)
    {
    b=a-0.5;
    }
    else
    {
    b=a+0.5;
    }
    cout<<b;
    return 0;
}
