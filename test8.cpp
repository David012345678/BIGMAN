#include<iostream>
using namespace std;
int main()
{
	int score;
	cin>>score;
	if(score>=0&&score<=50)
	{
		cout<<"low";
	}if(score>=51&&score<=75)
	{
		cout<<"medium";
	}
	if(score>=76&&score<=100)
	{
		cout<<"high";
	}
	if(score<0&&score<100)
	{
		cout<<"invalid";
	}
}
//determine whetger a person is an adult or a child 
