#include <iostream>
using  namespace std;
int main()
{
int a,b,i,j,flag=0,count=0;
cin>>a>>b;
for(i=a;i<=b;i++)
{
flag=0;
for(j=2;j<=(i/2);j++)
{
if((i%j)==0)
{
flag=1;
break;
}
else
{
flag=0;
}
}
if(flag==0)
{
count++;
}
}
cout<<count;
return 0;
}

 
