#include<iostream.h>
#include<conio.h>
class sum
{
private:
int sum;
public:
sum(int a, int b)
{
sum=a+b;
}
void display()
{
cout<<"sum of these numbers ="<<sum;
}
};
void main()
{
int a,b;
clrscr();
cout<<"enter two numbers";
cin>>a>>b;
sum s1(a,b);
s1.display();
getch();
}
