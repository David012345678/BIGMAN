#include<iostream>
#define Pie 3.142
using namespace std;
float calculation(float,float);
int main()
{
	float Radius,radius,area1,area2;
	cout<<"Enter the outer radius\n";
	cin>>Radius;
	cout<<"Enter the inner radius\n";
	cin>>radius;
	area1 =Pie*Radius*Radius;
	area2=Pie*radius*radius;
	cout<<"the shaded area =\n"<<calculation(area1,area2);
	return 0;
}
float calculation(float a,float b)
{
	return (a-b);
}