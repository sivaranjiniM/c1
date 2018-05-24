#include <iostream>
using namespace std;
int main()
{
	string a;
	int b,i,flag=0;
  getline (cin,a);
	b=a.length();
	for(i=0;i<b;i++)
	{
	if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
	{	
	cout<<"yes";
	flag=1;
	break;
	}
	}
	if(flag==0)
	{
	cout<<"no";
	}
	return 0;
}
