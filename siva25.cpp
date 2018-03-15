#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int i,b=2,flag=0;
	for(i=0;i<a;i++)
	{
	b=2*b;
	if(b==a)
	{
	flag=1;
	cout<<"yes";
	break;
	}
	}
	if(flag==0)
	cout<<"no";
	return 0;
}
