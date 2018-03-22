#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    int x,y=0,z;
    char a[10000],b[10000];
    cin>>a;
    cin>>z;
    if(z>strlen(a))
    {
    cout<<a;
    }
    for(x=z;x<=strlen(a);x++)
    {
    b[y]=a[x];
    y++;
    }	
    y=strlen(a)-z;
    for(x=0;x<z;x++)
    {
    b[y]=a[x];
    y++;
    }
    printf("%s",b);
    return 0;
}
