#include <iostream>
using namespace std;
int main()
{
	int a,count=1;
	cin>>a;
	while(a!=0)
	{
	a=a/10;
	if(a!=0)
	{
	count=count+1;
	}
	}
	printf("%d",count);
	return 0;
}
