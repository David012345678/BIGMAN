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
	Rectangle dm;
	dm.setvalues(3,4);
	cout<<"area:"<<dm.area();
	return 0;
}