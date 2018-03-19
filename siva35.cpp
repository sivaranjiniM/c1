#include <iostream>
using namespace std;
int main()
{
	int a,flag=0,i;
	cin>>a;
	if(a%2!=0 && a>3)
	{
	for(i=3;i<a;i++)
	{
	if(a%i==0)
	{
	flag=1;
	break;
	}
	}
	}
	if(flag==1)
	{
	cout<<"yes";
	}
	else
    cout<<"no";
	return 0;
}
