#include<iostream>
using namespace std;

//base class
class add
{
 private :
 int a;
 public :
 void adds(int m,int n)
 {
     a=m+n;
 }
 int get_add()
 {
     return a;
 }
 
 
};
class multiply
{
 private :
 int a;
 public :
 void multiple(int m,int n)
 {
     a=m*n;
 }
 int get_multiply()
 {
     return a;
 }

};

//derived class
class Answer:public add,public multiply
{

};
int main()
{

  Answer a1;
  int a,b;
  cout<<"\nEnter 2 Numbers for addition :";
  cin>>a>>b;  
  a1.adds(a,b);
  cout<<"\nYour result is :"<<a1.get_add();

  cout<<"\n\nEnter 2 Numbers for multiplication :";
  cin>>a>>b;
  a1.multiple(a,b);
  cout<<"\nYour multiplication result is :"<<a1.get_multiply();
}