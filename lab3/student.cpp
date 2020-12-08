#include<iostream.h>
#include<conio.h>
class student
{
int rollno,age;
char name[20],course[20];
public:
void enterdetails()
{
cout<<"enter student's roll number\n";
cin>>rollno;
cout<<"enter student's name\n";
cin>>name;
cout<<"enter student's age\n";
cin>>age;
cout<<"enter student's course\n";
cin>>course;
}
void showdetails()
{
cout<<"your entered roll number is\n"<<rollno;
cout<<"\nyour entered name is\n"<<name;
cout<<"\nyour entered age is\n"<<age;
cout<<"\nyour entered course is\n"<<course;
}
};
void main()
{
clrscr();
student s1;
s1.enterdetails();
s1.showdetails();
getch();
}
