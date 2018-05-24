#include <iostream>
using namespace std;
int main()
{
int i,temp;
int x[10];
for(i=0;i<10;i++)
{
cin>>x[i];
}
for(i=0;i<10;i++)
{
if(x[i]>x[i+1])
{
temp=x[i];
x[i]=x[i+1];
x[i+1]=temp;
}
}
cout<<x[i];
return 0;
}
