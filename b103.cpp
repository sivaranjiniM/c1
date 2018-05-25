#include <iostream>
using namespace std;
int main() 

{
	string  str;
	int i=0,n;
	getline (cin,str);
	n=str.length();
	for(i=0;str[i]!='\0';i++)
	{
	if(i==0)
	str[i]=toupper(str[i]);
	if(str[i]==' ')
	str[i+1]=toupper(str[i+1]);
	}
	cout<<str;
	return 0;
}
