#include<iostream>
#include<string>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;

class bankaccount
{
  private:
  string name,nomine,a,Mother,b,acc_type,c;
  long long int mobile_no,acc_num,age,aadhar_number,br_code;
  double balance,borrow,interests,add,times;
  string IFSC;


  public:
  bankaccount()
  {
      cout<<"\nEnter your name :";
      getline(cin,name);
      cout<<"\nEnter your age :";
      cin>>age;
      validity();
      cout<<"\nEnter your Mother Name :";
      if(age>=18)
      {cin.ignore();}
      getline(cin,Mother);
      cout<<"\nEner your mobile number :";
      cin>>mobile_no;
      cout<<"\nEnter your Aadhar Number :";
      cin>>aadhar_number;
      cout<<"\nEnter your account type Current Or Saving :";
      getline(cin,a);
      getline(cin,acc_type);
      cout<<"\nEnter your initial ammount Minimum Balance is 1000 :";
      cin>>balance;
      minimum_balance();
      account_number();
      IFSC="ABCD3642";
      br_code=8218;
      cout<<"\n\n\t\t\t\tCongratulations Your Account Is Created"<<endl<<endl;
      
  }

  void validity()
  {
   
   if(age<18)
   {
   
   cout<<"\nYour are a minor\n";
   cout<<"\nEnter your Custodian name :";
   cin.ignore();
   getline(cin,nomine);
   
   }
   else 
   {
     cout<<"\nYou are Eligible for bank account \n";
   }
  }

  void minimum_balance()
  {
    if(balance<1000)
    {
      cout<<"\nYou have enter insufficient balance Please Enter it again :";
      cin>>balance;
      minimum_balance();
      account_number();
    }
    else
    cout<<"\nYour Balance is sufficient \n";

  }

  void account_number()
  {
    srand((unsigned) time(0));
    acc_num=rand()%1000000000+1000000000;
  }
  void set_deposit(float a)
  {
    add=a;
    deposit();
  }
  void deposit()
  {
    balance=balance+add;
  }
  double get_deposit()
  {
    return balance;
  }
  void Set_withdraw(float a)
  {
    add=a;
    withdraw();
  }
  void withdraw()
  {
   double a;
   a=balance-add;
   if(balance<1000||a<1000)
   cout<<"\nYou Have enter insufficient amount \n";
   else{
   balance=balance-add;
   }
  }
  float get_withdraw()
  {
  return balance;
  }
  void set_interest(double a)
  {
     times=a;
     interest();
  }
  void interest()
  {
    double a,m;
    if(age>59)
    m=7.5;
    else
    m=6;
    a=(1+(m/100));
    interests=balance*pow(a,times)-balance;
  }
  float get_interest()
  {
     return interests;
  }

  void display_balance(float a)
  {
    cout<<"\nThe required balance is :"<<a;
  }
  void display_details()
  {
   cout<<"\n======-----=====----====----======--=====--=====-=======--======--======-=======--========-=======------======---=======-----========--------====";
   cout<<"\n\n\t\t\t\t\tYour Credentials\n\n\t\tName :"<<name<<"\t\t\tAadhar Number :"<<aadhar_number<<"\n\t\tAccount Number :"<<acc_num<<"\t\tIFSC CODE :"<<IFSC<<"\n\t\tMobile Number :"<<mobile_no<<"\t\tAccount Type :"<<acc_type<<"\n\t\tAccount Balance :"<<balance<<"\t\t\tBank Code :"<<br_code<<"\n\t\tMother Name :"<<Mother<<"\t\t\tAge :"<<age<<endl<<endl; 
   
  }
  



};
int main()
{
  int n=0;
  float a;
  cout<<"\n\t\t\t\t\t Welcome To New Era Bank \n";
  cout<<"\nPlease Enter the details You are asked \n";
  
  bankaccount one;
  one.display_details();
  while(n!=5)
  {
    cout<<"\n======-----=====----====----======--=====--=====-=======--======--======-=======--========-=======------======---=======-----========--------====";
    cout<<"\n\nEnter your choice\t1. Account_details\t 2.Withdraw Money \t3.Deposit Money \t4.Interest \t5.Exit \nYour Choice : ";
    cin>>n;
    switch(n)
    {
      case 1:
      one.display_details();
      break;
      case 2:
      cout<<"\nEnter the money to withdraw : Rs";
      cin>>a;
      one.Set_withdraw(a);
      cout<<"\nYour New Balance Is : Rs"<<one.get_withdraw()<<endl;
      break;
      case 3:
      cout<<"\nEnter The Money to deposit : Rs";
      cin>>a;
      one.set_deposit(a);
      cout<<"\nYour New Balance is : Rs"<<one.get_deposit()<<endl;
      break;
      case 4:
      cout<<"\nEnter The time for interest :";
      cin>>a;
      one.set_interest(a);
      cout<<"\nYour Interest is : Rs"<<one.get_interest()<<endl;
      break;
      case 5:
      return 0;
      break;
    }
    
  }
   return 0;

}