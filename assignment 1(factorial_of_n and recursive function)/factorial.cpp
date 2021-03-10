#include<iostream>
#include<cmath>
double factorial(double m);
int main()
{
    double a;
    std::cout<<"Enter the number to find its factorial :";
    std::cin>>a;
    double x;
    x=factorial(a);
    std::cout<<"The required factorial is :"<<x;
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