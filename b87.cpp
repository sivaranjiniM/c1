#include <iostream>
using namespace std;
int main() 
{
	int A,B,GCD,I;
  cin>>A>>B;
	for(i=1 ;i<=A && i<=B; ++i)
	{
	if(A%i==0 && B%i==0)
	{
	GCD=i;
	}
	}
	cout<<GCD;
	return 0;
}
