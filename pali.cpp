#include<iostream>
using namespace std;
int main()
{
	
	int num, rem, orig, rev=0;
	cout<<"Enter a number : ";
	cin>>num;
	orig=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10 + rem;
		num=num/10;
	}
	if(rev==orig)  
	{
		cout<<"Palindrome";
	}
	else
	{
		cout<<"Not Palindrome";
	}
	return 0;
}
