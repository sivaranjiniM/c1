#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the number:"<<endl;
    cin>>a;
    for(b=1;b<=a;b++)
    {
    if(a%b==0)
    {
    cout<<"\t"<<b;
    }
    }
    return 0;
}
