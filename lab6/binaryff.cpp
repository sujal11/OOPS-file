#include<iostream.h>
#include<conio.h>
class A
{
int a;
public:
void set_a()
{
a = 5;
}
void get_a()
{
cout<< a <<"\n";
}
friend A operator *(A ob1,A ob2)
{
A temp;
temp.a = ob1.a * ob2.a;
return temp;
}
};
void main()
{
A ob1, ob2;
clrscr();
ob1.set_a();
ob2.set_a();
cout<<"The value of a in first object : ";
ob1.get_a();
cout<<"The value of a in second object : ";
ob2.get_a();
A ob3 = ob1 * ob2;
cout<<"The value of a after calling operator overloading function * is : ";
ob3.get_a();
getch();
}
