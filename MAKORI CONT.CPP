#include<iostream>
using namespace std;
int main()
{
	int pin,attempts,balance,options,num,transfer,charge1,airtime,charge2,totaltransfer,newbalance;
	charge1=120;
	attempts=0;
	charge2=200;
	cout<<"Welcome to our banking application\n";
	do{
	
	cout<<"Key in the user pin:\n";
	cin>>pin;
	
	if(pin!=1234){
	cout<<"WRONG PIN";
	attempts++;
	if(attempts==3){
		cout<<"you have excceeded the maximum number of attempts.goodbye"<<endl;
		return 0;
	}
	cout<<"you have"<<3-attempts<<"attempts left."<<endl;}
	
}
	while(pin!=1234&&attempts<3);
	do{
	
	
		cout<<"key in your account  balance\n";
		cin>>balance;
		cout<<"1.Transfer cash\n2.Deposit cash\n3.Buy airtime\n4.Check balance\n";
		cin>>options;
		switch(options)
		{
			case 1:
				cout<<"key in the amount to be transferd:";
				cin>>transfer;
				if(transfer<=balance){
				
				if(transfer>=100&&transfer<=100000){
				
				cout<<"transaction charges="<<charge1<<endl;
				totaltransfer=transfer+charge1;
				newbalance=balance-totaltransfer;
				cout<<"Total amount transferd="<<totaltransfer<<endl;
				cout<<"Your new balance="<<newbalance<<endl;}
				else if(transfer>100000)
				{
				
				cout<<"transaction charges="<<charge2<<endl;
				totaltransfer=transfer+charge2;
				newbalance=balance-totaltransfer;
				cout<<"Total amount transferd="<<totaltransfer<<endl;
				cout<<"Your new balance="<<newbalance<<endl;}
			}
			else(transfer>balance);
			{
				cout<<"insufficient balance";
			}
				break;
				case 2:
					cout<<"Enter the amount you wish to deposit\n";
					cin>>transfer;
					newbalance=transfer+balance;
					cout<<"You have deposited:"<<transfer<<"into your account and your new kcb account balance="<<newbalance<<endl;
					break;
					case 3:
						cout<<"Enter the amount of airtime you wish to buy\n";
						cin>>airtime;
						cout<<"enter the number\n";
						cin>>num;
						newbalance=balance-airtime;
						cout<<"You have bought this amount of airtime"<<airtime<<"to this number"<<num<<"and your new kcb account balance is ="<<newbalance<<endl;
				break;
				case 4:
					cout<<"active account\n balance="<<balance<<endl;
					break;
				default:
					cout<<"wrong input\n ";
					attempts++;
					if(attempts==3){
						cout<<"you have exceeded the maximum number of options.goodbye."<<endl;
					}
					cout<<"you have "<<3-attempts<<"attempts left."<<endl;
		}}while (attempts<3);
		cout<<"thank you for using our banking application.goodbye."<<endl;
	
	return 0;
}