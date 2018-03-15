#include <iostream>
using namespace std;
int main()
{
	char a[100];
	cin>>a;
	int i,count1=0,count2=0;
	for(i=0;a[i]!='\0';i++)
	{
	if(a[i]!=')' && a[i]!='(' )
	{
	break;
	}
	else
	{
	if(a[i]==')')
	{
	count1=count1+1;
	}
	if(a[i]=='(')
	{
	count2=count2+1;
	}
	}
	}
	if(count1==count2)
	cout<<"yes";
	else
	cout<<"no";
	return 0;
}
