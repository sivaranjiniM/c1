#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int  main()
{
	
	char str[20];
	int len, x, y,temp;
	cout<<"Enter a string : ";
	cin.getline(str,20);
	len=strlen(str);
	x=0;
	y=strlen(str)-1;
	while(x<y)
	{
		temp=str[x];
		str[x]=str[y];
		str[y]=temp;
		x++;
		y--;
	}
	for(x=0; x<len; x++)
	{
		if(str[x]=='a' || str[x]=='e' || str[x]=='i' ||
		str[x]=='o' || str[x]=='u' || str[x]=='A' ||
		str[x]=='E' || str[x]=='I' || str[x]=='O' ||
		str[x]=='U')
		{
			for(y=x; y<len; y++)
			{
				str[y]=str[y+1];
			}
		len--;
		}
	}
	cout<<"After deleting the vowels, the string will be : "<<str;
	return 0;
}
