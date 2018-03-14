#include<iostream>
using namespace std;
int main()
{
int a[20],n,i,j,count=0;
cout<<"Enter the numbers";
cin>>n;
cout<<"Array values";
for(i=1;i<=n;i++)
{
	cin>>a[i];
}
for(i=0;i<=n;i++)
{
	for(j=i+1;j<=n;j++)
	{
		if(a[i]==a[j])
		{
			cout<<a[i];
			count=count+1;
		}
	}
}
if(count==0)
{
	cout<<"UNIQUE";
}
}
