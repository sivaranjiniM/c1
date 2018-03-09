#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
 int a,p=0,r,q;
 cin>>a;
 q=a;
 do
 {
      r=q%10;
      p=p+pow(r,2);
      q=q/10;
 }
 while(q%10!=0);
 printf("%d",p);
 return 0;
}
