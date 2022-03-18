#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int hour, min, sec, h, m, s;
  
  cin >> hour >> min >> sec;
  cout << hour << ":" << min << ":" << sec << endl;
  
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

  cout << hour << ":" << min << ":" << s << endl;
  
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

  cout << hour << ":" << m << ":" << s << endl;

  if (hour<0)
  {
    h = 0;
  }
  else if (hour>=24)
  {
    h = hour%24;
  }

  cout << h << ":" << m << ":" << s << endl;
}