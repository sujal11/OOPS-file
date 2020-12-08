#include<iostream.h>
#include<conio.h>
class Animal
{
 public:
 void eats()
 {
  cout<<"animal eats\n";
 }
 void sleep()
 {
  cout<<"animal sleeps\n";
 }
};
class Dog : public Animal
{
 public:
 void bark()
 {
  cout<<"a dog barks\n";
 }
};
class YoungOne : public Dog
{
 public:
 void nameOfYoungOne()
 {
  cout<<"name of young one is tom\n";
 }
};
void main()
{
 clrscr();
 YoungOne y1;
 y1.eats();
 y1.sleep();
 y1.bark();
 y1.nameOfYoungOne();
 getch();
}
