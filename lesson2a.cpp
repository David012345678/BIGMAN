#include<iostream>
using namespace std;
main ()
{
	int pi,radius,area;
	pi=3.142;
	area=pi*radius*radius;
	cout<<"enter the radius\n";
	cin>>radius;
	if(radius>0)
	{
	cout<<"area=\n"<<(area=pi*radius*radius);
	}
	else
		cout<<"error";
	
	return 0;
}