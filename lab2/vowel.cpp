#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char str[20],temp;
clrscr();
cout<<"Enter a string\n";
cin>>str;
for(int i=0;str[i]!='\0';i++)
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='0'||str[i]=='U')
{
for(int j=i;str[j]!='\0';j++)
{
str[j]=str[j+1];
}
}
}
str[i]='\0';
cout<<"after removing vowel\n"<<str;
getch();
}
