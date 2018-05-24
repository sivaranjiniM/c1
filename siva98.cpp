#include <iostream>
using namespace std;
int main() 
{
	char a[10];
	int x,i;
  cin>>a;
	for(i=0;a[i]!='\0';i++)
	{
	x=(int)(a[i]);
	if(x%2!=0)
	{
	cout<<"\t"<<a[i];	
	}
	}
	return 0;
}
