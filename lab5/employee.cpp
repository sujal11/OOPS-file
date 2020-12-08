#include<iostream.h>
#include<conio.h>
class employee
{
int id,salary;
char name[50];
public:
void getdata()
{
 cout<<"enter employee name\n";
 cin>>name;
 cout<<"enter employee ID\n";
 cin>>id;
 cout<<"enter employee salary\n";
 cin>>salary;
}
void display()
{
 cout<<"employee's name=\n"<<name;
 cout<<"\nemployee's ID=\n"<<id;
 cout<<"\nemployee's salary\n"<<salary;
}
};
void main()
{
  employee e1;
  clrscr();
  e1.getdata();
  e1.display();
  getch();
}
