#include <iostream>
using namespace std;
int main() 
{
	int num,flag=0,temp;
	cin>>num;
	temp=num;
	while(temp!=1)
	{
	if(temp%2!=0)
	{
	flag=1;
	break;
	}
	temp=temp/2;
	}
	if(flag==0)
	{
	cout<<"yes";
	}
	else if(flag==1)
	{
	cout<<"no";
	}
	return 0;
}
