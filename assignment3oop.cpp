#include<iostream>
using namespace std;
float calculation(float,float);
int main()
{
	float length,width;
	cout<<"Enter the length\n";
	cin>>length;
    cout<<"Enter the width\n";
    cin>>width;
    cout<<"\nlength in meters="<<length*0.3;
     cout<<"\nwidth in meters="<<width*0.3;
	cout<<"\nthe area="<<calculation(length*0.3,width*0.3);
	return 0;
}
float calculation(float l,float w)
{
	return (l*w);
}