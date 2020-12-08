#include<iostream.h>
#include<conio.h>
class myclass
{
static int a;
int b;
public:
static int c;
void set (int i,int j)
{
a++;
b=i;
c=j;
}
void get()
{
cout<<"\nstatic a:"<<a<<".non-static b:"<<b<<".static c:"<<c;
}
};
int myclass::a=10;
int myclass::c;
void main()
{
clrscr();
cout<<"\nPublic static c:"<<myclass::c;
myclass m1,m2;
m1.set(1,2);
m2.set(3,4);
m1,get();
m2.get();
getch();
}
