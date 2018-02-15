#include<iostream>
  using namespace std;
  int main()
  {
   
	int n, n1, n2=0, x;
	cout<<"Enter any positive number : ";
	cin>>n;
	n1=n;
	while(n1!=0)
	{
		x=n1%10;
		n2=n2 + x*x*x;
		n1=n1/10;
	}
	if(n2==n)
	{
		cout<<"Amstrong Number";
	}
	else
	{
		cout<<"Not Amstrong Number";
	}
	
}
