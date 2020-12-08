#include<iostream>
using namespace std;
class DB;
class DM
{
  float met,cm;
  public:
  void getval()
  {
    cout<<"Enter the distance in meter and centimeter ";
    cin>>met>>cm;
  }
  void disp()
  {
    cout<<"Distance in Meters : "<<met<<endl;
    cout<<"Distance in Centimeters : "<<cm;
  }
  friend void add(DM a,DB b);
};
class DB
{
  float feet,inch;
  public:
  void getval()
  {
    cout<<"Enter the distance is feet and inches : ";
    cin>>feet>>inch;
  }
  void disp()
  {
    cout<<"Distance in Feet : "<<feet<<endl;
    cout<<"Distance in Inches : "<<inch;
  }
  friend void add(DM a,DB b);
};
void add(DM a,DB b)
{
  int ch;
  float sum;
  cout<<"1. Meter/Centimeter\n2.Feet/Inches ";
  cin>>ch;
  if(ch==1)
  {
    DM c;
    sum = a.met*100 + a.cm + b.feet*30.48 + b.inch*2.54;
    c.cm = sum;
    c.met = sum/100;
    c.disp();
  }
  else if(ch==2)
  {
    DB d;
    sum = b.feet*12+b.inch+a.cm*0.394+a.met*39.37;
    d.inch = sum;
    d.feet = sum/12;
    d.disp();
  }
  else
  {
    cout<<"INVALID \n";
  }
}
int main()
{
  DM d1;
  DB d2;
  d1.getval();
  d2.getval();
  add(d1,d2);
  return 0;
}
