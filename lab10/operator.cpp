#include<iostream>
#include<string.h>
using namespace std;
class operate
{
	int operand1,operand2;
	char operate;
	public:
	void get()
	{
		cout<<"Enter the operand 1, operator, operand 2";
		cin>>operand1>>operate>>operand2;
	}
	void decision()
	{
		switch(operate)
		{
			case '*': cout<<"product of you numbers="<<operand1 * operand2;
			        break;
			case '/': cout<<"quotient of your numbers="<<operand1 /operand2;
			        break;
			case '%': cout<<"remainder of you numbers="<<operand1 % operand2;
			        break;
			case '-': cout<<"difference of your numbers="<<operand1-operand2;
			        break;
			case '+': cout<<"addition of your numbers="<<operand1+operand2;
			        break;       
		}
	}
};
int main()
{
	operate op;
	char choice;
	do
	{
	op.get();
	op.decision();
	cout<<"Do you want to continue";
	cin>>choice;
    }
    while(choice=='y');
	return 0; 
}
