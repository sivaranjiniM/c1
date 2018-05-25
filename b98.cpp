#include <iostream>
using namespace std;
int main() 
{
	int i,B,A[10];
	cin>>B;  
	for(i=1;i<=B;i++)  
	{  
	cin>>A[i];    
	if(A[i]!=i)    
	{
	cout<<i;      
	break;
  }    
	}
	return 0;
}
