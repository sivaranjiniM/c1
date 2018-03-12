#include <iostream>
using namespace std;
int main()
{
  char X[10];
	cin>>X;
	int i,flag=0;
	for(i=0;X[i]!='\0';i++)
	{
  if(X[i]>='0' && X[i]<='9')
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
