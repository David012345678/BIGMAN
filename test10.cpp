#include<iostream>
using namespace std;
int main()
{
	int height;
	cin>>height;
	if(height<160)
	{
		cout<<"short";
	}
	else if (height>=160&&height<=186)
	{
		cout<<"medium";
	}
	else
	cout<<"tall";
}
//determine whetger a person is an adult or a child 
