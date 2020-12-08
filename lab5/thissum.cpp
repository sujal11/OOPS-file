#include<iostream.h>
#include<conio.h>
class distance
{
 int dist,sum,difference;
 public:
 distance(int value)
 {
 dist=value;
 }
 void add(distance d1)
 {
  sum=this->dist+d1.dist;
  cout<<"sum of these distances=\n"<<sum;
 }
 void subtract(distance d1)
 {
 difference=this->dist-d1.dist;
 cout<<"\ndifference of these distances=\n"<<difference;
 }
};
void main()
{
int d1,d2;
clrscr();
cout<<"enter distance 1\n";
cin>>d1;
cout<<"enter distance 2\n";
cin>>d2;
distance dis(d1);
distance dis1(d2);
dis.add(dis1);
dis.subtract(dis1);
getch();
}
