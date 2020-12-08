#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void reverse(char str1[])
{
int temp,i=0,j;
char str2[10];
for(j=strlen(str1)-1;j>=0;j--)
{
temp=str2[i];
str2[i]=str1[j];
str1[j]=temp;
i++;
}
str2[i]='\0';
cout<<"reversed string=\n"<<str2;
}
void main()
{
clrscr();
int i,j,size;
char str1[10];
cout<<"enter a string\n";
cin>>str1;
reverse(str1);
getch();
}
