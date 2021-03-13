#include<iostream>
#include<cmath>
double factorial(double m);
double display(double a)
{
    std::cout<<"\nThe required factorial is :"<<a;
    return 0;
}
int main()
{
    double a;
    std::cout<<"\nEnter the number to find its factorial :";
    std::cin>>a;
    double x;
    x=factorial(a);
    display(x);
    return 0;

}
double factorial(double m)
{
    double r;
    if(m==1 || m==0)
    {
        return 1.0;
    }
    else
    { 
    r=m*factorial(m-1);
    }
    return r;
}
