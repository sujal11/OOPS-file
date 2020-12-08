#include<iostream.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=0;i<5;i++)
{
int m=1;
 for(j=0;j<5;j++)
 {
  if(j<5-i)
  {
  cout<<" ";
  }
  if(j>5-i)
  {
  cout<<m;
  m++;
  }
  }
  cout<<"\n";
}
getch();
}
