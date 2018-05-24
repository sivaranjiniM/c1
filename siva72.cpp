#include <iostream>
using namespace std;
#include<string>
int main()
{
	int x,y;
	cin>>x>>y;
	x=x^y;
	y=x^y;
	x=x^y;
	cout<<x<<"\t" <<y;
	return 0;
}
