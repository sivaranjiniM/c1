#include <iostream>
using namespace std;
int main() 
{
	int a,b,i,flag=0;
	cin>>a>>b;
	int x[10];
	for(i=0;i<a;i++)
	{
  cin>>x[i];
	}
	for(i=0;i<a;i++)
	{
	if(x[i]==b)
	{
	cout<<"yes";
	flag=1;
	break;
	}
	}
	if(flag==0)
	{
	cout<<"no";
	}
	return 0;
}
