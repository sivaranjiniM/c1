#include <iostream>
using namespace std;
int main()
{
	string a;
	int i,flag=0,j;
	cin>>a;
	for(i=0;a[i]!='\0';i++)
	{
	for(j=i+1;a[j]!=0;j++)
	{
	if(a[i]==a[j])
	{
	cout<<"no";
	flag=1;
	break;
	}
	}
	if(flag==1)
	break;
	}
  if(flag==0)
  {  
	cout<<"yes";
  }
	return 0;
}
