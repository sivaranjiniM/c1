#include <iostream>
using namespace std;
int main() 
{
	int a,b;
	cin>>a;
	for(b=1;b<=a;b++)
	{
  if(a%b==0)
	{
  if(b%2==0)
	{
	cout<<b;
	}
	}
	}
	return 0;
}
