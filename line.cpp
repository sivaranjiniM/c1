#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
 
int main()
{
    char X[1000];
    int i,count=1;
    
    cout<<"Enter a string:";
    cin.getline(X,1000);
    
    for(i=0;X[i]!='\0';++i)
    {
        if(X[i]==' ')
            count++;
    }
    
    cout<<"\nThere are "<<count<<" words in the given string";
 
    return 0;
}
