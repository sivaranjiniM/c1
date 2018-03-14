#include<iostream>
using namespace std;
int  main()
{
int a[20],n,i,j,temp;
cout<<"Enter the number";
cin>>n;
cout<<"Array values are";
for(i=0;i<n;i++)
{
	cin>>a[i];
}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]<a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
for(i=0;i<n;i++)
    {
	printf("%d",a[i]);
    }
}
