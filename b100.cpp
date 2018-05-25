#include <iostream>
using namespace std;
int main() 
{
	int n,a,p=1;
	cin>>n;
	while(n!=0)
	{
	a=n%10;
	p=p*a;
	n=n/10;
	}
  cout<<p;
	return 0;
}
