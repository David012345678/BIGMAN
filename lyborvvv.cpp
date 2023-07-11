#include<iostream>
using namespace std;
class CSquare;
class CRectangle {
	int width,height;
	public:
		int area ()
		{return (width * height);
		}
		void convert (CSquare a);
		
};
class CSquare {
	private:
		int side;
		public:
			void setside(int a){side=a;}
			friend class CRectangle;
			
};
void CRectangle :: convert (CSquare a){
	width = a.side;
	height= a.side;
}
int main (){

CSquare sqr;
CRectangle rect;
sqr.setside(4);
rect.convert (sqr);
cout<<rect.area();
return 0;
}