#include <iostream>
using namespace std;
int main()
{
	char a[10];
	cin>>a;
	int x,y,z;
	for(x=0;a[x]!='\0';x++)
	{
	y=a[x];
	if(y>91)
	{
	z=y-32;
	a[x]=z;
	}
	if(y<97)
	{
	z=y+32;
	a[x]=z;
	}
	}
	printf("%s",a);
	return 0;
}
