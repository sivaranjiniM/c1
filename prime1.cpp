#include<iostream>
using namespace std;
int main()
{
	
	int n,i,count=0;
	cout<<"Enter a number:";
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		cout<<"This is a prime number";
	}
	else
	{
		cout<<"This is not a prime number";
	}
	return 0;
}
