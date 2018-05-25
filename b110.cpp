#include<iostream>
using namespace std;
int main()
{
    int N,sum=0;
    cout<<"enter the number:"<<endl;
    cin>>N;
    for(int i=0;i<=N;i++)
    {
    sum=sum+i;
    }
    cout<<sum;
    return 0;
}
