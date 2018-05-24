#include <iostream>
using namespace std;
int main()
{
    int i,temp; 
    string s;
    cout<<"enter the value"<<endl;
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        temp=s[i];
        if(temp>='0' && temp<='9')
        {
        cout<<"Yes";
        break;
       }
        else
        {
        cout<<"No";
        break;
        }
    }
    return 0;
}
