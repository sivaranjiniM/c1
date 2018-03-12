#include <iostream>
#include<string.h>
using namespace std;
int main()
{
char a[100];
	char b[100];
	int k;
	int i ,count;
	int m,n;
	cin>>a,b;
	cin>>k;
	m=strlen(a);
	n=strlen(b);
  for(i=0;i<m;i++)
		{
			if(m!=n)
			{
				
				break;
			}
			else if(a[i]==b[i])
			{
				count=count+0;
			}
			else
			{
				count=count+1;
			}
		}
	if(count==k)
	cout<<"yes";
	else
	cout<<"no";
	return 0;
}
