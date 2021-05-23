#include<iostream>
#include<iomanip>
using namespace std;
class time
{
  private:
  int hour,minute,second;
  string a;
  public:
  friend time add(time,time);
  time(int h,int m,int s)
  {
      hour=h;
      minute=m;
      second=s;
  }
  string meridiem()
  {
      if(hour>=12 && hour<24)
      {
          a="pm";
          return a;
      }
      else
      a="am";
      return a; 
  }
  int hour_getter()
  {
      return hour;
  }
  int minute_getter()
  {
      return minute;
  }
  int second_getter()
  {
      return second;
  }
  
};
time add(time first,time second)
{
    int h,m,s;
    
    s=first.second+second.second;
    m=first.minute+second.minute+(s/60);
    h=first.hour+second.hour+(m/60);
     
    if(h>=24)
    {
        
        h=h-24;
        
    }
    
    if(m>=60)
    {
        
        m=m-60;
    }
   
    if(s>=60)
    {
        s=s-60;
    }
    time added(h,m,s);

    return added;    
}
int main()
{
   cout<<"\n\t\t\t\t\t\t\t Time Class Programme \n\n";
   int hour,minute,second;
   cout<<"\n\n\t\tEnter first time";
   cout<<"\n\nEnter time in hour :";
   cin>>hour;
   while(hour>=24)
   {
       cout<<"\nYou have enter wrong hour Enter again :";
       cin>>hour;
   }
   cout<<"\nEnter time in minutes :";
   cin>>minute;
   while(minute>=60)
   {
       cout<<"\nYour have enter wrong time Enter again :";
       cin>>minute;
   }
   cout<<"\nEnter time in seconds :";
   cin>>second;
   while(second>=60)
   {
       cout<<"\nYour have enter wrong time Enter again:";
       cin>>second;
   }
   time t1(hour,minute,second);
   cout<<"\n\nEntered time is :"<<setfill('0')<<setw(2)<<t1.hour_getter()<<":"<<setfill('0')<<setw(2)<<t1.minute_getter()<<":";
   cout<<setfill('0')<<setw(2)<<t1.second_getter()<< t1.meridiem();
   
   cout<<"\n\n\t\tEnter Second time ";
   cout<<"\n\nEnter time in hour :";
   cin>>hour;
   while(hour>24)
   {
       cout<<"\nYou have enter wrong hour Enter again :";
       cin>>hour;
   }
   cout<<"\nEnter time in minutes :";
   cin>>minute;
   while(minute>60)
   {
       cout<<"\nYour have enter wrong time Enter again :";
       cin>>minute;
   }
   cout<<"\nEnter time in seconds :";
   cin>>second;
   while(second>60)
   {
       cout<<"\nYour have enter wrong time Enter again:";
       cin>>second;
   }
    time t2(hour,minute,second);
   cout<<"\n\nEntered time is :"<<setfill('0')<<setw(2)<<t2.hour_getter()<<":"<<setfill('0')<<setw(2)<<t2.minute_getter()<<":";
   cout<<setfill('0')<<setw(2)<<t2.second_getter()<< t2.meridiem();
   cout<<"\t\t\t\n\nAdding both the times";
   cout<<"\n\nRequired Added Time :";
   time result(0,0,0);
   result=add(t1,t2);
   cout<<setfill('0')<<setw(2)<<result.hour_getter()<<":"<<setfill('0')<<setw(2)<<result.minute_getter()<<":";
   cout<<setfill('0')<<setw(2)<<result.second_getter()<<result.meridiem()<<endl<<endl;
   return 0;
}