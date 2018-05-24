#include <iostream>
using namespace std;
int main()
{
	int i;
	string s1,s2;
	cout<<"enter the s1:"<<endl;
	getline (cin,s1);
	cout<<"enter the s2:"<<endl;
	getline (cin,s2);
	for(i=0;s1[i]!='\0';i++)
	{
	if(s1[i]>s2[i])
	{
  cout<<s1<<endl;
	break;
	}
	else if(s1[i]<s2[i])
	{
	cout<<s2;
	break;
	}
	else
	{
	cout<<"both are equal";
	break;
	}
	}
	return 0;
}
