#include<iostream>
using namespace std;
int main(void)
{
	int n,i,temp,j;
	cout<<"enter n";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
	cin>>a[i];
  }
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{
	if(a[j]<a[i])
	{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	}
	}
	}
  i=n/2;
  cout<<a[i];
	return 0;
}
