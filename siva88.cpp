#include<iostream>
using namespace std;
int main()
{
int hr,hr1,hr2,mn,mn1,mn2;
cout<<"Enter the hour and miniute"<<endl;
cin>>hr1>>mn1;
cin>>hr2>>mn2;
hr=hr1-hr2;
mn=mn1-mn2;
cout<<"The time is: "<<hr<<" "<<mn;
return 0;
}
