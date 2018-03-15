#include <iostream>
using namespace std;
int main()
{
	char a[15];
	cin>>a;
	int i;
	for(i=0;a[i]!='\0';i=i+3)
	{
	cout<<a[i];
	}
	return 0;
}
