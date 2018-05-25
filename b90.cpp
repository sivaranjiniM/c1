#include <iostream>
using namespace std;
int main() 
{
	string  a;
	int i;
	getline (cin,a);
	for(i=0;a[i]!='\0';i++)
	{
	if(a[i]>='0' && a[i]<='9')
	{
	cout<<a[i]<<"\t";
	}
	}
	return 0;
}
