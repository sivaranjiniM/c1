#include<iostream>
using namespace std;
int main()
{
int x[10],i,n,t,j;
cout<<"enter n";
cin>>n;
cout<<"enter the array values";
for(i=0;i<n;i++)
{
cin>>x[i];
}
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(x[i]<x[j])
{
t=x[i];
x[i]=x[j];
x[j]=t;
}
}
}
for(i=0;i<n;i++)
{
cout<<x[i];
}
}
