#include<iostream>
#include<cmath>
using namespace std;
double power(double m,int n=2)
{
    double res;
    res=pow(m,n);
    return res;
    

}
double print(double);
int main()
{
    int b;
    double a;
    cout<<"We are calculating the power of the number "<<endl;
    cout<<"Enter the number :"<<endl;
    cin>>a;
    cout<<"enter the power :"<<endl;
    cin>>b;
    double x;
    x=power(a,b);
    print(x);
    return 0;


}
double print(double x)
{
     cout<<"The required result is :"<<x;
}