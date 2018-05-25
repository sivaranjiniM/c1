#include <iostream>
using namespace std;
int main() 
{
	int n,flag=0,i,m;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	if((n/i==2) && (n%i==0))
	{
	cout<<i;
	flag=1;
	break;
	}
	}
	if(flag==0)
	{
  cout<<n;
	}
	return 0;
}
