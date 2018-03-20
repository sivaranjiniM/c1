#include <iostream>
#include<string.h>
using namespace std;
int main()
{
int str1,str2,max=0,i,n;	
char a[100],b[100];
cout<<"enter no of strings";
cin>>n;
cout<<"Enter the first string:"<<endl;
cin>>a;
cout<<"Enter the second string: "<<endl;
cin>>b;
str1=strlen(a);
str2=strlen(b);
if(str1>str2)
{
max=str1;	
}
else	
{
max=str2;	
}
for(i=0;i<max;i++)	
{
if(a[i]==b[i])		
{
cout<<a[i];		
}
else		
{	
break;		
}	
}	
return 0;
}
