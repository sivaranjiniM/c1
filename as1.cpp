#include<iostream>
  using namespace std;
  int main()
  {
      int n1,n2,n3,i,n4,sum;
      cout<<" enter the numbers n1,n2";
      cin>>n1>>n2;
      for(i=n1;i<=n2;i++)
{
    sum=0;
    n3=i;
    for(;n3>=0;n3/=10)
    {
        n4=n3%10;
        sum=sum+(n4*n4*n4);
    }
    if(sum==i)
    {
        cout<<i<<endl;
    }
}   
  }
