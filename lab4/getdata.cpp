#include<iostream.h>
#include<conio.h>
class test
{
private:
int data;
public:
test()
{
data=0;
}
int getdata()
{
return data;
}
};
void main()
{
test t;
int* ptr=(int*)&t;
*ptr=10;
clrscr();
cout<<t.getdata();
getch();
}
