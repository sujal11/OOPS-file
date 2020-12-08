#include<iostream.h>
#include<conio.h>
class power
{
 int x,y;
 public:
 power(int a,int b)
 {
  x=a;
  y=b;
 }
 int power_num()
 {
  int i,power=1;
  if(y==0)
  return 1;
  else
  {
  for(i=1;i<=y;i++)
  {
   power=power*x;
  }
  return power;
 }
 }
};
void main()
{
 int z;
 power p(5,2);
 clrscr();
 z=p.power_num();
 cout<<"5 raised to power 2="<<z;
 getch();
}
