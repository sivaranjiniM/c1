#include <iostream>
using namespace std;
int main()
{
  int a,b=0,c;  
  cout<<"Enter the number"<<endl;
  cin>>a;
  while(a!=0)
  {
  c=a%10;
  b=b+c;
  a=a/10;
  }
  cout<<"The sum is"<<"\t"<<b;
  return 0;
}
