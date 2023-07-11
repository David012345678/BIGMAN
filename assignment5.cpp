#include<iostream>
using namespace std;
int main()
{
float total,discount,price;
	cout<<"Enter the total amount shopped=\n";
	cin>>total;
	if(total<=99)
	{
		price=total;
	cout<<"price="<<price;
}

	else if(total>101&&total<=200)
	{
	discount=0.05*total;
	price=total-discount;
	cout<<"price="<<price;
	}
	else if(total>200&&total<=400)
	{
		discount=0.1*total;
		price=total-discount;
	cout<<"price="<<price;
	}
	else if(total>411&&total<=800)
	{
		discount=0.2*total;
		price=total-discount;
	cout<<"price="<<price;
}
	else if(total>800)
	{
		discount=0.25*total;
		price=total-discount;
	cout<<"price="<<price;
}
	else 
	cout<<"error";
	return 0;

}
 