#include<iostream>
using namespace std;
int main()
{
int a[50],b,c,i,count=0;
cin>>b>>c;
for(i=0;i<b;i++)
{
cin>>a[i];
}
for(i=0;i<b;i++)
{
if(a[i]==c)
{
count++;
}
}
cout<<count;
}
