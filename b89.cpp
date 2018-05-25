#include <iostream>
using namespace std;
int main() 
{
	string s,temp;
	int i,k,j;
	cout<<"enter the string:"<<endl;
  getline (cin,s);
	for(i=0;s[i]!='\0';i++)
	{
	for(j=i+1;s[j]!='\0';j++)
	{
	if(s[i]>s[j])
	{
	temp[k]=s[i];
	s[i]=s[j];
	s[j]=temp[k];
	}
	}
	}
  cout<<s;
	return 0;
}
