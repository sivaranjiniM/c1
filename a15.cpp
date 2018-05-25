#include <iostream>
using namespace std;
int main() 
{
string s,n;
int i,j,count=0,max=0;
getline (cin,s);
for(i=0;s[i]!='\0';i++)
{
for(j=i+1;s[j]!='\0';j++)
if(s[i]==s[j])
{
count=count+1;
if(count>max)
{
max=count;
n=s[i];
}
}
}
cout<<"the repeted string is:"<<endl;
cout<<n;
return 0;
}
