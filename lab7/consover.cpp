#include<iostream.h>
#include<conio.h>
class add
{
 int a,b,c;
 float d,e,f;
 public:
 add()
 {
  cout<<"sum is \n";
 }
 add(int a, int b)
 {
  c=a+b;
 }
 add(float d, float e)
 {
  f=d+e;
 }
 void display()
 {
  cout<<c<<"\n";
 }
 void display1()
 {
 cout<<f;
 }
};
void main()
{
 clrscr();
 int i,j;
 float x,y;
 cout<<"enter two integer numbers\n";
 cin>>i>>j;
 cout<<"enter two float number\n";
 cin>>x>>y;
 add k;
 add k1(i,j);
 add k2(x,y);
 k1.display();
 k2.display1();
 getch();
}
