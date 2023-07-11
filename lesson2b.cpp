#include<iostream>
using namespace std;
double areaofacircle(int);
main ()
{
	int radius;
	cout<<"enter the radius\n";
	cin>>radius;
	cout<<"area="<<areaofacircle(radius);
	return 0;
}
double areaofacircle(int r)
{
	return 3.142*r*r;
}