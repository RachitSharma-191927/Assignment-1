#include<iostream>
#include<cstring>
using namespace std;
class strings
{
   private:
   char a[20],b[20],c[20],e[40];
   
   public :
   
   strings()
   {
     cout<<"\n\n\t\t\t\t\t\t String Function Programme ";
     c[0]=('\0');
   }
   void set_string(char *d)
   {
     
     for(int i=0;i<20;i++)
     {
     c[i]=*(d+i);
     }
   }
   void set_string1(char *d)
   {
     for(int i=0;i<20;i++)
     {
     a[i]=*(d+i);
     }
   }
   void set_string2(char *d)
   {
     for(int i=0;i<20;i++)
     {
     b[i]=*(d+i);
     }
   }
   void addition()
   {
     int j=0;
     int i=0;
      while(a[i]!='\0')
      {
        e[i]=a[i];
        i++;  
      }
      while(b[j]!='\0')
      {
        e[i]=b[j];
        j++;
        i++;
      }
    e[i]='\0';
    
   }
   string get_addition()
   {
     return e;
   }

   void equate()
   {
     
     int i=0,n=0;
       while((b[i]!='\0')||(a[i]!='\0'))
       {
        if(a[i]>b[i])
         {
          std::cout<<"\n"<<a<<" string is greater";
          n=1;
          break;
         }
         else if(a[i]<b[i])
         {
           std::cout<<"\n"<<b<<" string is greater";
           n=1;
           break;
         }
         i++;

       }
      if(n==0)
         {
           std::cout<<"\n"<<"Both strings "<<a<<" and "<<b<<" are equal";
           
         }
   }
   string get_string()
   {
     
     return c;
   }
   
   
};
int main()
{
  char c[20],d[20];
  strings m;
  int a=0;
  while(a!=5)
  {
  cout<<"\n\n-------------------------------------------------------------------------------------------------------------------------------------\n\n";
  cout<<"\n\t\t\t\t\t\tPlease Choose Your Input\n\n1.String Store\t\t 2.String Add \t\t3.String Compare \t4.Stored Value Of String \t\t5.Exit \n\nYour Choice : ";
  
  cin>>a;
  switch(a)
  {
    case 1:
    cout<<"\nEnter Your string A :";
    cin.ignore();
    cin.getline(c,20);
    m.set_string(c);
    cout<<"\nThe String A Stored Is : "<<m.get_string();
    break;

    case 2:
    cout<<"\nEnter the string 1 to add :";
    cin.ignore();
    cin.getline(c,20);
    m.set_string1(c);
    cout<<"\nEnter the string 2 to add :";
    cin.getline(d,20);
    m.set_string2(d);
    m.addition();
    cout<<"\nThe New added String A Is :"<<m.get_addition();
    
    break;

    case 3:
    cout<<"\nEnter the string 1 to compare :";
    cin.ignore();
    cin.getline(c,20);
    m.set_string1(c);
    cout<<"\nEnter the string 2 to compare :";
    cin.getline(d,20);
    m.set_string2(d);
    m.equate();
    break;

    case 4:
    cout<<"\nThe required stored string is :"<<m.get_string();
    break;
    
    case 5:
    return 0;

  }
  }
  
  return 0;

}