#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,p,flag=0;
	cin>>a>>b;
	c=b*a;
	for(d=1;d<=c/2;d++)
	{
	p=d*d;
	if(p==c)
	{
	cout<<"yes";
	flag=1;
	break;
	}
	}
	if(flag==0)
	cout<<"no";
	return 0;
}
