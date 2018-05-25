#include <iostream>
using namespace std;
int main()
{
	string  a;
	cin>>a;
	int b,c,i;
  cin>>b;
	c=a.length();
	for(i=b;i<c;i++)
	{
	cout<<a[i];
	}
	return 0;
}
