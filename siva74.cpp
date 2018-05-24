#include <iostream>
using namespace std;
int main() 
{
	int n,i, f1=1,f2=1,f3;
  cin>>n;
	cout<<f1<<"\t"<<f2;
	for(i=1;i<n-1;i++)
	{
	f3=f1+f2;
	cout<<"\t"<<f3;
	f1=f2;
	f2=f3;
	}
	return 0;
}
