#include <iostream>
using namespace std;
int main()
{
	int n,sum=0,i;
            cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
  cin>>a[i];	
	}
	for(i=0;i<n;i++)
	{
	sum=sum+a[i];
	}
	int avg=sum/n;
	cout<<avg;
	return 0;
}
