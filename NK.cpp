#include <iostream>
using namespace std;
int main() 
{
    int i,N,K,sum=0,a[N];
    cout<<"enter the value of N,K:";
    cin>>N>>K;
    for(i=0;i<=K;i++)
    {
        sum=sum+i;
        cout<<"sum is="<<sum<<endl;
        cin>>sum;
        
    }
}
