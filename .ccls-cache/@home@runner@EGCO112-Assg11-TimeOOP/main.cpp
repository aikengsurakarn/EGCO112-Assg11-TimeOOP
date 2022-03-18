#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
  private:
    int h,m,s;
  public: 
    void getTime(int=0, int=0, int=0);
    Time subtract(Time);
    void display();
};

void Time::getTime(int hour, int min, int sec)
{
  cin >> hour >> min >> sec;
  
  if (sec<0)
  {
    s = 0;
  }
  else if (sec>=60)
  {
    s = sec%60;
    min = min + sec/60;
  }
  else
  {
    s = sec;
  }

  if (min<0)
  {
    m = 0;
  }
  else if (min>=60)
  {
    m = min%60;
    hour = hour + min/60;
  }
  else
  {
    m = min;
  }

  if (hour<0)
  {
    h = 0;
  }
  else if (hour>=24)
  {
    h = hour%24;
  }
  else
  {
    h = hour;
  }
}

Time Time::subtract(Time t1)
{
  class Time t3;
  int time3, time2, time1;
  time2 = h*3600 + m*60 + s;
  time1 = t1.h*3600 + t1.m*60 + t1.s;

  time3 = time2 - time1;

  t3.s = time3%60;
  t3.m = ((time3-t3.s)/60)%60;
  t3.h = (time3-t3.s-t3.m*60)/3600;
  
  return t3;
}

void Time::display()
{
  cout<<setw(2)<<setfill('0')<<h;
  cout<<":";
  cout<<setw(2)<<setfill('0')<<m;
  cout<<":";
  cout<<setw(2)<<setfill('0')<<s;
  cout<<endl;
}

int main()
{
  Time t1,t2,t3;
  cout<<"What time was it? ";
  t1.getTime(); // สามารถแปลง 10:70:60 -->11:11:00
                //           10:-2:30. -->10:0:30
  cout << "It was ";
  t1.display();
  cout<<"What time is it now? ";
  t2.getTime();
  cout << "It is ";
  t2.display();
  t3=t2.subtract(t1); //t3=t2-t1
  cout<<"Time diff is ";
  t3.display();

  // ตัวอย่าง 02:-5:-30
}