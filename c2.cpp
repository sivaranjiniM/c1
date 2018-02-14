#include <iostream>
using namespace std;
class B
{
    public:
    void display(int n)
    {
        if(n%2==0)
        cout<<"the no is even"<<endl;
        else
        cout<<"the no is odd"<<endl;
    }
};
    int main()
    {
    B b;
    b.display(6);
    }
    
