#include<iostream>
using namespace std;
class Cdavid{
private:
int rad;
#define Pie 3.142
public:
void set_rad(int r){
rad = r;
}
double get_area(){
double area = Pie*rad*rad;
return area;
}
};
int main()
{
	Cdavid db;
	db.set_rad(7);
	cout<<"area of a circle="<<db.get_area()<<endl;
	return 0;
}