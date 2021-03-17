#include<iostream>
#include<cmath>
using namespace std;
class power_main
{
public:
double result,a,b;

public:
void gett()
{   
    cout<<"We are calculating the power of the number "<<endl;
    cout<<"Enter the number :"<<endl;
    cin>>a;
    cout<<"enter the power :"<<endl;
    cin>>b;
}
inline void power()
{
    result=pow(a,b);  
}
void display()
{
    cout<<result;
}
}rs;
int main()
{
    
    rs.gett();
    rs.power();
    rs.display();
    return 0;
}