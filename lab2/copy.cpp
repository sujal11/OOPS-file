#include<iostream.h>
#include<conio.h>
void copy(char str1[])
{
int i;
char str2[10];
clrscr();
for(i=0;str1[i]!='\0';i++)
{
str2[i]=str1[i];
}
str2[i]='\0';
cout<<"copied string=\n"<<str2;
}
void main()
{
clrscr();
int i,j,size;
char str1[10];
cout<<"enter a string\n";
cin>>str1;
copy(str1);
getch();
}
