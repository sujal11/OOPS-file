#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
void main()
{
  ofstream fil;
  char line[20],ch;
  fil.open("File1.txt");
  cout<<"Enter the text ";
  gets(line);
  fil<<line;
  fil.close();
  ifstream fl;
  fl.open("File1.txt");
  while(!fl.eof())
  {
    fl.get(ch);
    cout<<ch;
  }
  fl.close();
  return 0;
}
