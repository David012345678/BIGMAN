#include<iostream>
using namespace std;
double calculation(int l,int w);
main ()
{
	int length,width;
	cout<<"enter the length\n";
	cin>>length;
		cout<<"enter the width\n";
		cin>>width;
		cout<<"perimeter="<<calculation(length,width);
	return 0;
}
double calculation(int l,int w)
{
	return l+l+w+w;
}