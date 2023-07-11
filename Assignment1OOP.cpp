#include<iostream>
using namespace std;
main ()
{
	int x,y;
	char symbol;
	cout<<"Enter the SYMBOL OF OPERATION('+','/','*'AND'%')\n";
	cin>>symbol;
	cout<<"Enter the first number=\n";
	cin>>x;
	cout<<"Enter the second number=\n";
    cin>>y;
    switch(symbol)
    {
    	case'+':
    		cout<<x<<'+'<<y<<'='<<(x+y);
    		break;
    	case'/':
    	cout<<x<<'/'<<y<<'='<<(x/y);
    	break;
    	case'*':
    	cout<<x<<'*'<<y<<'='<<(x*y);
    	break;
    	case'%':
    	cout<<x<<'%'<<y<<'='<<(x % y);
    	break;
    	default:
    	cout<<"error check your symbol";
	}
    return 0;
}