#include <iostream>
using namespace std;
class B
{
    public:
    void display(int n)
    {
        if(n<0)
        cout<<"the no is negative"<<endl;
        else
        cout<<"the no is positive"<<endl;
    }
};
    int main()
    {
    B b;
    b.display(-5);
    }
    
