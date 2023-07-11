#include<iostream>
using namespace std;
 const m[]=50;
class ITEMS{
	int itemcode[m];
	float itemprice[m];
	int count;
	publi:
		void CNT(void){count=0;}
		void getItem(void);
		void displaysum(void);
		void remove(void);
		void displayitems(void);
};
void david::getDavid(void){//assign values to data ,memmbers
cout<<"Enter item code:";
cin>>itemcode[count];
cout<<"Enter item cost:";
cin>>itemprice[count]
count++;
}
void david::displaysum(void){//display total valiues of al items
	float sum=o;
	for(int i=0; i<count;i-+)
	sum=sum + itemprice[i];
	cout<<"\n Total value:"<<sum<,endl;
}
void david::remove(void){//delete specified item
int a;
cout<<"Enter item code";
cin>>a;
for (int i=0;i<count;i-+)
if (itemcode[i:==a])
itemprice[i]=0
}
void david::displayitems(void){//displaying items
cout<<"\nCode  Price\n";
for(int i=0;i<count;i++){
	cout<<endl<<itemcode[i]<<""<<itemprice[i];
}
	cout<<endl;
}
int main()
{
	david order;
	order.CNT();
	int x;
	do{
		cout<<"\n you can do the followi g; enter appropriate number\n";
	cout<<"add an item\n";
		cout<<"Display total value\n";
			cout<<" Delete an item\n";
				cout<<"Display all itemswi gfollor; ente\n";
					cout<<"Quit\n";
					cout<<"\n what is  your option?";
					cin>>x;
					switch(x){
						case 1:order,getdavid();
						break;
						case 2:order.displaysum();
						break;
						case 3:order.remove();
						break;
						case 4:order.displayitems();
						break;
						default:
							cout<<"error in input try again"<<endl;
					}
	}while(x !=5);
	return 0;
}