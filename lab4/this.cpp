#include<iostream.h>
#include<conio.h>
class rectangle
{
int length,breadth;
public:
rectangle(int l=5, int b=5)
{
length = l;
breadth=b;
}
int area()
{
return length*breadth;
}
int compare(rectangle rec)
{
return this->area()>rec.area();
}
};
void main()
{
rectangle rec1(9,4);
rectangle rec2(8,2);
clrscr();
if(rec1.compare(rec2))
{
cout<<"rec2 is smaller than rec1\n";
}
else
cout<<"rec2 is equal or larger than rec1\n";
getch();
}
