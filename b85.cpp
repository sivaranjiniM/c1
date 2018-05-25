#include <iostream>
using namespace std;
int main()
{
	string  str;
	int i,n;
	cout<<"Enter the string"<<endl;
	cin>>str;
	n=str.length();
	for(i=0;i<n;i++)
	{
	if(i%2==0)
	{
	cout<<str[i];
	}
            }
            cout<<" ";
	for(i=0;i<n;i++)
	{
	if(i%2!=0)
	{
	cout<<str[i];
	}
	}
	return 0;
}
