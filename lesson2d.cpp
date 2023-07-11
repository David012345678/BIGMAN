#include<iostream>
using namespace std;
double calculation(int b,int h);
main ()
{
	int base,height;
	cout<<"enter the base\n";
	cin>>base;
		cout<<"enter the height\n";
		cin>>height;
		cout<<"area of a parallelogram="<<calculation(base,height);
	return 0;
}
double calculation(int b,int h)
{
	return b*h;
}