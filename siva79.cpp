#include <iostream>
using namespace std;
int main() 
{
	char str[50];
            int i,count=1;
            cout<<"enter the sentence:"<<endl;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
	if(str[i]==' ')
	{
	count=count+1;
	}
	}
	cout<<"no of words"<<"\t"<<count;
	return 0;

}
