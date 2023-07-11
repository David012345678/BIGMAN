#include<iostream>
using namespace std;
float calculation(float);
int main()
{
	float dimension;
	cout<<"Enter the dimension\n";
	cin>>dimension;
	cout<<"the surface area=\n"<<calculation(dimension);
	return 0;
}
float calculation(float d)
{
	return (d*d*6);
}