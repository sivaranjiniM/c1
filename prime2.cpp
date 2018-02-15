#include <iostream>
using namespace std;
int main() 
{
int a,b,i,X;
cout<<"enter the values of a,b";
cin>>a>>b;
while(a<b)
{
    X=0;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            X=1;
            break;
            
        }
    }
    if(X==0)
    cout<<a<<" ";
    ++a;
}
return 0;
}
