#include<iostream>
using  namespace std;
class david{
	int m,n;//private bny default
	public:
		void input(void);
			void display(void);
				int largest(void);
};
int david::largest(void){
	if(m>=n)
	return (m);
	else
	return(n);
}
void david::input(void){
	cout<<"Enter the values of m and n:"<<endl;
	cin>>m>>n;
}
void david::display(void){
	cout<<"largest value="<<largest()<<endl;
}
int main()
{
	david dm;
	dm.input();
	dm.display();
	return 0;
}