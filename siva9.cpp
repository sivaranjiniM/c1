#include <iostream>
using namespace std;
int main() 
{
  string str1,str2;
  cout<<"enter strings";
  cin>>str1>>str2;
  int s=str1.length(),r=str2.length();
  if(s==r)
{
  cout<<"yes";
}
  else
{
  cout<<"no";
}
  return 0;
}
