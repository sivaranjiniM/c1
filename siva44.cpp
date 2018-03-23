#include <iostream>
using namespace std;
int main()
{
	int a,b=0,arr[10],rem;
	cin>>a;
	while(a!=0)
	{
	rem=a%2;
	arr[b]=rem;
	a=a/2;
	b++;
	}
	for(int c=b-1;c>=0;c--)
	{
	printf("%d",arr[c]);
	}
	return 0;
}
