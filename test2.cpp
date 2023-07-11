#include<iostream>
using namespace std;
main()
{
	double num1,num2;
	char sign;
	cout<<"Enter the operator symbol (+,-,*,/):\n";
	cin>> sign;
	cout<<"Enter the first number:\n";
	cin>>num1;
	cout<<"Enter the second number:\n";
	cin>>num2;
	switch(sign)
	{
		case '+':
			cout<<num1<< "+" <<num2<< "=" << (num1+num2);
			break;
			
		case '-':
		    cout<<num1<< "-" <<num2<< "=" << (num1-num2);
			break;
			
		case '*':
		    cout<<num1<< "*" <<num2<< "=" << (num1*num2);
			break;
			
		case '/':
		    cout<<num1<< "/" <<num2<< "=" << (num1/num2);
			break;		
	}
return 0;
}