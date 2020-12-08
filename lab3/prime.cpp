#include<iostream.h>
#include<conio.h>
class prime
{
int i,j,k,check;
public:
prime(int j)
  {
  k=j;
  }
  void checkp()
  {
  check=0;
  {
  for(i=2;i<=k/2;i++)
  {
  if(k%i==0)
  {
  check=1;
  break;
  }
  else
  check=0;
  }
  }
  }
void display()
  {
  if(check==1)
    {
    cout<<"this is not a prime number\n";
    }
  else
    {
    cout<<"this is a prime number\n";
    }
  }
};
void main()
{
  int j;
  clrscr();
  cout<<"enter a number";
  cin>>j;
  prime p1(j);
  p1.checkp();
  p1.display();
  getch();
}
