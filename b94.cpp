#include <iostream>
using namespace std;
int main()
{
    int N,K,a[1000];
    cout<<"enter  N and K values:"<<endl;
    cin>>N>>K;
    for(int i=0;i<N;i++)
    {
    cin>>a[i];
    }
    for(int i=0;i<N;i++)
    {
    if(a[i]==K)
    {
    cout<<a[i];
    }
    }
    return 0;
}
