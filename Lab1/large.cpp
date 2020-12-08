#include<iostream.h>
#include<conio.h>
void main()
{
int arr[10],i,n,max;
clrscr();
cout<<"enter size of array\n";
cin>>n;
cout<<"enter elements of your array\n";
for(i=0;i<n;i++)

cin>>arr[i];
max=arr[0];
for(i=0;i<n;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
}
cout<<"largest element of the array is\n"<<max;
getch();
