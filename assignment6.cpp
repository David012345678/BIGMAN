#include<iostream>
using namespace std;
main()
{
	int row,column;
		for(row=5;row>=1;row--)
	{
		for(column=1;column<=row;column++)
		{
cout<<row%2;
}

	cout<<"\n";
		for(row=4;row>=1;row--)
	{
		for(column=1;column<=row;column++)
		{
cout<<column;
}

	cout<<"\n";
}
return 0;
}

}