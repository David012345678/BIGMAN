#include<iostream>
using namespace std;
main ()
{
	double x,y;
	char sign;
	cout<<"enter the operation(+ - * )\n";
	cin>>sign;
	cout<<"enter the first number\n";
	cin>>x;
	cout<<"enter the second number\n";
    cin>>y;
    switch(sign)
    {
    	case'+':
    		cout<<x<<'+'<<y<<'='<<(x+y);
    		break;
    	case'-':
    	cout<<x<<'-'<<y<<'='<<(x-y);
    	break;
    	case'*':
    	cout<<x<<'*'<<y<<'='<<(x*y);
    	break;
    	default:
    	cout<<"error";
	}
    return 0;
}
    	
    