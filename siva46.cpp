#include <iostream>
using namespace std;
#include<string.h>
int main()
{
	char a[50];
	int b,count=1;
	gets(a);
	for(b=0;a[b]!='\0';b++)
	{
	if(a[b] == ' ')
	count++;
	}
	printf("%d",count);
	return 0;
}
