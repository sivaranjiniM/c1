#include <iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n,k;
	int i,a,count=0;
	while(n>0)
	{
	a=n%10;
	if(a==k)
	{
	count=count+1;
	}
	n=n/10;
	}
  cout<<count;
	return 0;
}
