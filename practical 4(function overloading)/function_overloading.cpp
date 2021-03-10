#include<iostream>
#include<cmath>
float power(float n,float m)
{
     float a;
     a=pow(n,m);
     return a;

}
float power(float n)
{

    float b;
    b=pow(n,2.0);
    return b;

}
void display(float a)
{
      std::cout<<"\nThe required result is :"<<a;
}
int main()
{
    float exponent,base;
    float a,b;
    std::cout<<"\nEnter the base for the power ";
    std::cin>>base;
    std::cout<<"\nEnter the Exponent for the power ";
    std::cin>>exponent;
    a=power(base,exponent);
    display(a);
    b=power(base);
    display(b);
    return 0;

}


