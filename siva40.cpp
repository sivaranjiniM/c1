#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,sum=0;
	cin>>b;
	cin>>c;
	cin>>d;
	for(a=0;a<b;a++)
	{
	if(a==0)
	{
	sum=sum+c;
	}
	else
	{
	c=c+d;
	sum=sum+c;
	}
	}
	printf("%d",sum);
	return 0;
}
