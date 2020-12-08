#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
int count=0;
char str[20];
clrscr();
cout<<"Enter a string\n";
gets(str);
for(int i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{
count++;
}
}
count++;
cout<<"number of words in this string=\n"<<count;
getch();
}
