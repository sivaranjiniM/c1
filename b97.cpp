#include <iostream>
using namespace std;
int main()
{
	int a,b,rev=0;
  cin>>a;
	while(a!=0)
	{
	b=a%10;
	rev=rev*10+b;
	a=a/10;
	}
	cout<<rev;
	return 0;
}
