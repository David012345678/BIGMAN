#include<iostream>
using namespace std;
class item{
	int number;//private by default
	float cost;//private by default
	public:
		void getData(int a,float b);//function prototype
		//function defined inside a class
	void putData(void){
			cout<<"number:"<<number<<endl;
			cout<<"cost:"<<cost<<endl;
		}
};
//member function defination
 void item::getData(int a,float b){
	number=a;
	cost=b;//a and b (private variables)are used directly
}
//main program
int main(){
	item dm;//create object dm
	cout<<"Object dm"<<endl;
	dm.getData(100,299.5);//call member function
	dm.putData();//call member function
	item db;
		cout<<"Object db"<<endl;
	db.getData(200,190.50);//call member function
	db.putData();//call member function
	return 0;
}
