#include<iostream>
using namespace std;
#include<string.h>
int main()
{	
	int t=0,n,m,i;
	char rom[9];
	cin>>rom;
	m=strlen(rom);
	for(i=0;i<m;i++)
	{
	switch (rom[i])
    {
    case 'I':  
    rom[i] = 1;
    break;
    case 'V': 
    rom[i] = 5;
    break;
    case 'X': 
    rom[i] = 10;
    break;
    case 'L': 
    rom[i] = 50;
    break;
    case 'C':  
    rom[i] = 100;
    break;
    case 'D': 
    rom[i] =  500;
    break;
	}
    }
    for(i=0;i<m;i=i+2)
    {
	if(rom[i]<rom[i+1])
	{
	n=rom[i+1]-rom[i];
	}
	else
	{
	n=rom[i+1]+rom[i];
	}
	t=n+t;
    }
    cout<<t;
    return 0;
}
