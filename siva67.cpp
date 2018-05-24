#include <iostream>
using namespace std;
int main() 
{
    int a = 0,n,rem[10];
    int sum = 0;
    
    cin >> n;
    while (n > 0)
    {	
    rem[a] = n%10;
    sum = sum + rem[a];
    n= n/10;
    a++;
    }
    for (a = a-1; a >= 0 ; a--)
    {
    cout << rem[a] << " ";
    }
    return 0;
}
