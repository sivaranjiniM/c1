#include <iostream>
using namespace std;
int main() 
{
	int n,m,i,j;
  cin>>n>>m;
	int a[10];
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	if(a[i]%2!=0)
	{
	for(j=i+1;j<n;j++)
	{
	if(a[j]%2!=0)
	{
	cout<<a[j];
	break;
	}
	}
	break;
	}
	}
	return 0;
}
