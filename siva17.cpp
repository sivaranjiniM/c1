#include <iostream>
using namespace std;
int main()
{
	int a,b,j,i;
	cin>>a,b;
	for(i=2;i<=a;i++)
	{
	 if(a%i==0 && b%i==0)
	{
	 j=i;
	}
	}
	printf("%d",j);
	return 0;
}
