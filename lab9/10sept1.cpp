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
void main()
{
 clrscr();
 Dog d1;
 d1.eats();
 d1.sleep();
 d1.bark();
 getch();
}
