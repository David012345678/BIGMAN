#include<iostream>
using namespace std;
int main()
{
	int pin,balance,options,transfer,charge1,charge2,totaltransfer,newbalance;
	charge1=120;
	charge2=200;
	cout<<"Welcome to our banking application\n";
	cout<<"Key in the user pin:\n";
	cin>>pin;
	if(pin!=1234){
	cout<<"WRONG PIN\n Goodbye";
}
	else if(pin=1234){
		cout<<"key in your account  balance\n";
		cin>>balance;
		cout<<"1.Transfer cash\n2.Deposit cash\n3.Buy airtime\n4.Check balance\n";
		cin>>options;
		switch(options)
		{
			case 1:
				cout<<"key in the amount to be transferd:";
				cin>>transfer;
				if(transfer>=100&&transfer<=100000)
				cout<<"transaction charges=%d"<<charge1;
				totaltransfer=transfer+charge1;
				newbalance=balance-totaltransfer;
				cout<<"Total amount transferd=%d\n"<<totaltransfer;
				cout<<"Your new balance=%d\n"<<newbalance;
				break;
				default:
					cout<<"invalid option";
		}
	}
	return 0;
}