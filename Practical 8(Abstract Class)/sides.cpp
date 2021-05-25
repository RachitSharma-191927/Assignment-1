#include<iostream>
using namespace std;
class sides
{
   protected :
   int sides;
   public :
   virtual void num_of_sides()=0;

};
class trapezoid : public sides{
public:
void num_of_sides()
{
    sides=4;
}
int get_trap_sides()
{
    return sides;
}
};
class triangle : public sides{
public:
void num_of_sides()
{
    sides=3;
}
int get_triangle_sides()
{
    return sides;
}
};
class hexagon : public sides{
public:
void num_of_sides()
{
    sides=6;
}
int get_hex_sides()
{
    return sides;
}
};
int main()
{
trapezoid t1;
t1.num_of_sides();
cout<<"\nNo of sides of trapezoid :"<<t1.get_trap_sides();
triangle t2;
t2.num_of_sides();
cout<<"\nNo of sides of triangle :"<<t2.get_triangle_sides();
hexagon t3;
t3.num_of_sides();
cout<<"\nNo of sides of hexagon :"<<t3.get_hex_sides();
return 0;
}