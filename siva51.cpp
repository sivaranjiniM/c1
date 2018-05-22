#include <iostream>
using namespace std;
int main()
{
	char a[10];
	cin>>a;
	int i,flag=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			flag=1;
		}
		else
		{
		flag=0;
		break;
		}
	}
 if(flag==1)
	{
	cout<<"yes";
	}
  else
    cout<<"no";
	return 0;
}
