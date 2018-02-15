#include <iostream>
using namespace std;
int main() 
{
    char c;
    cout<<"enter a character"<<endl;
    cin>>c;
    if((c>='a' && c<='z') || (c>='A' && c<='Z'))
    cout<<" c is  alphabet"<<endl;
    else 
    cout<<"c is not alphabet"<<endl;
    return 0;
}    
	
