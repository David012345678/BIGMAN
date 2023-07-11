#include<iostream>
#define Pie 3.142
using namespace std;
double calculation(double);
int calculation(int,int);
int calculation(int l,int w)
{
	return (l*w);
	}	
float calculation(float,float);
float calculation(float a,float b)
{
return (a-b);
	
}

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
	cout<<"\n";
		int length,width;
	cout<<"Enter the length\n";
	cin>>length;
    cout<<"Enter the width\n";
    cin>>width;
    cout<<"\nlength in meters="<<length*3;
     cout<<"\nwidth in meters="<<width*3;
     cout<<"\nthe area="<<calculation(length*3,width*3);
     cout<<"\n";
     	double  dimension;
	cout<<"Enter the dimension\n";
	cin>>dimension;
	cout<<"the surface area=\n"<<calculation(dimension);
	return 0;
}
double  calculation(double d)
{
	return (d*d*6);
}
