#include <iostream>
using namespace std;
int main()
{
	char a[10];
    cin>>a;
	int i,flag=0,j;
	for(i=0;a[i]!='\0';i++)
	{
	for(j=i+1;a[j]!='\0';j++)
	{
	if(a[i]==a[j])
	{
	flag=1;
	cout<<"yes";
	break;
	}
	}
	if(flag==1)
	{
	break;
	}
	}
	if(flag==0)
	{
	cout<<"no";
	}
	return 0;
}
