#include<iostream.h>
#include<conio.h>
void main()
{
int n,arr[10],i,j,key;
clrscr();
cout<<"enter the size of array you want\n";
cin>>n;
cout<<"enter elements of the array\n";
for(i=0;i<n;i++)
cin>>arr[i];
cout<<"array before sorting\n";
for(i=0;i<n;i++)
cout<<arr[i]<<"\n";
for(i=1;i<n;i++)
{
key=arr[i];
j=i;
while(j>0 && arr[j-1]>key)
{
arr[j]=arr[j-1];
j--;
}
arr[j]=key;
}
cout<<"array after implementing insertion sort\n";
for(i=0;i<n;i++)
{
cout<<arr[i]<<"\n";
}
getch();
}
