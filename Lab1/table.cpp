#include<iostream.h>
#include<conio.h>
void main()
{
int x,i;
clrscr();
cout<<"out of 7, 22 and 45 which table you want??\n";
cin>>x;
cout<<"table of"<<x<<"=\n";
switch(x)
{
case 7:for(i=1;i<=10;i++)
       {
       cout<<x<<"*"<<i<<"="<<x*i<<"\n";
       }
       break;
case 22:for(i=1;i<=10;i++)
	{
	cout<<x<<"*"<<i<<"="<<x*i<<"\n";
	}
	break;
case 45:for(i=1;i<=10;i++)
	{
	cout<<x<<"*"<<i<<"="<<x*i<<"\n";
	}
	break;
}
getch();
}
