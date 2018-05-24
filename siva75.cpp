#include<iostream>
using namespace std;
int main()
{
char a[20];
int b=0,i,c=0;

for(i=0;i<=20;i++)
{
cin>>a[i];
}
for(i=0;i<=20;i++)
{
if((a[i]>='a'||a[i]>='A')&&(a[i]<='z'||a[i]<='Z'));
{
c++;
}
  if(a[i]>='0'&&a[i]<='9')
  {
  b++;
  }
 }
 if(b>0&&c>0)
  cout<<"yes";
else
cout<<"no";
return 0;
}
