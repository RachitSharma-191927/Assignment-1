#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[20],b[20];
    cout<<"\nenter first string";
    cin.getline(a,20);
    cout<<"\nenter second string";
    cin.getline(b,20);
    int d;
    d=strcmp(a,b);
    if(d==1)
    {
    cout<<"a is greater";
    }
    else if(d==0)
    {
        cout<<"both are equal";
    }
    else
    cout<<"b is greater";
}