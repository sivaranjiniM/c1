#include <iostream>
#include<cmath>
using namespace std;
int main() 
{
    int n,s=0,i;
    cout<<"enter the value of n"<<endl;
    cin>>n;
   for(i=1;i<=n;i++)
   {
       if(n%i==0)
       {
           s++;
       }
   }
   if(s==2)
       cout<<"prime";
       else
       cout<<"not prime";
   }
