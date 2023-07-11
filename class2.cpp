#include<iostream>
using namespace std;
class Rectangle{
	int x,y;
	public:
		setvalues(int,int);
		int area (){return (x * y);
		}
};
Rectangle::setvalues(int a,int b){
	x=a;
	y=b;
}
int main(){
	Rectangle dm,db;
	dm.setvalues(3,4);
		db.setvalues(5,6);
	cout<<"area:"<<dm.area()<<endl;
	cout<<"area:"<<db.area()<<endl;
	return 0;
}
//one class two objects
