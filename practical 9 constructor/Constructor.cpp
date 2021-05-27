#include<iostream>
#include<cmath>
using namespace std;
class answer{

    private :
    int a,b,c;
    public :
    //Parameterized Constructor
    answer(int m)
    {
        b=m*m;
    }
    //Copy Constructor
    answer(answer &first)
    {
        b=first.b;
    } 
    //constructor Overloading
    answer(int m,int n)
    {
      a=m+n;
    }
    
  
    answer(int m,int n,int o)
    {
        c=m*n*o;
    }
    
    

    int get_addition()
    {
        return a;
    }
    int get_square()
    {
        return b;
    }
    int get_volume()
    {
        return c;
    }

    int get_copy()
    {
        return b;
    }
    
};
int main()
{
    int a,b,c;
    cout<<"\nEnter a number for square :";
    cin>>a;
    answer a1(a);
    cout<<"\nSquared Number is :"<<a1.get_square()<<endl;
    answer copy=a1;
    cout<<"\nCopy constructor Result is :"<<copy.get_copy()<<endl;

    cout<<"\nEnter 2 numbers for addition :";
    cin>>a;
    cin>>b;
    answer b1(a,b);
    cout<<"\nAddition Result is :"<<b1.get_addition()<<endl;

    cout<<"\nEnter 3 dimensions for volume of cuboid :";
    cin>>a>>b>>c;
    answer c1(a,b,c);
    cout<<"\nVolume of cuboid is :"<<c1.get_volume()<<endl;

    return 0;

}