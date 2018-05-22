#include <iostream>
using namespace std;
int main() 
{
	char s1[2],s2[2],s3[2];
	cin>>s1;
	cin>>s2;
	cin>>s3;
	if((s1[0]=s2[0]=s3[0])||(s1[1]=s2[1]=s3[1]))
	{
	cout<<"yes";
	}
	else if((s1[0]=s1[1])&&(s2[0]=s2[1])&&(s3[0]=s3[1]))
	{
	cout<<"yes";
	}
	else
	{
	cout<<"no";
	}
	return 0;
}
