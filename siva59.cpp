#include <iostream>
using namespace std;
int main() 
{
	char a[10];
	int i,count=0;
	cin>>a;
	for(i=0;a[i]!='\0';i++)
	{
	if(a[i]>='0' && a[i]<='9')
	{
	count=count+1;
	}
	}
  cout<<count;
	return 0;
}
