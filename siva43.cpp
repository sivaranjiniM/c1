#include <iostream>
using namespace std;
int main()

{
    int p,a,i,j,perimeter,area,flag=0;
    cin>>p;
    cin>>a;
    for(i=1;i<=(p/2);i++)
    {
    for(j=1;j<=(p/2);j++)
    {
    perimeter=2*(i+j);
    area=i*j;
    if(perimeter==p && area==a)
    {
    cout<<"yes";
    flag=1;
    break;
    }
    }
    if(flag==1)
    break;
    }
    if(flag==0)
    {
    cout<<"no";
	  }
    return 0;
} 
