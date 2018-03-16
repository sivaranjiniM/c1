#include<iostream>
using namespace std;
#include<math.h>
int  main()
{
  int w,x,y,A,B;
  cin>>A;
  cin>>B;
  w=A;
  x=B;
  if(w>=1&&w<=50)
  {
  if(x>=1&&x<=50)
  {
  y=pow(w,x);
  }
  }
  cout<<y;
}
