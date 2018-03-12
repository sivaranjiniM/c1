#include <iostream>
using namespace std;
int main()
{
	char a[100];
	cin>>a;
	int i,j,k;
	j=a[0];
	if(j>91)
	{
		k=j-32;
		a[0]=k;
		
	}
	for(i=1;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			j=a[i+1];
			if(j>91)
			{
				k=j-32;
				a[i+1]=k;
			}	
		}
	}
	cout<<a;
	return 0;
}
