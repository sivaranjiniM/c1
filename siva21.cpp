#include<iostream>
using namespace std;
int  main()
{
    int a[50]={1,2,3,4,5,6,7,8};
    int i,n; 
    int min= a[0];
    cout<<" Enter the n";
    cin>>n;
    for(i=0;i<n;i++)
    {
    cout<<a[i];
    if(a[i]<min)
    {
    min=a[i];
    }
    }
    printf("\n%d",min);  
}
