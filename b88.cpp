#include <iostream>
using namespace std;
int main()
{
	int a,b,LCM;
	cin>>a>>b;
	LCM=(a>b)?a:b;
	while(1)
	{
	if(LCM%a==0 && LCM%b==0)
	{
	cout<<LCM;
	break;
	}
	++LCM;
	}
	return 0;
}
