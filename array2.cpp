#include <iostream>
using namespace std;
int main ()
{
// a 2x3 array
int a [3][2] = { {0, 2}, {1, 4}, {3, 7} };
// traverse array elements
for (int i=0; i<3; i++) // access rows of the array

for (int j=0; j<2; j++) // access rows of the column.
{
cout << "a [" <<i<< "] [" <<j<< "]: ";
cout << a[i][j] << endl;
}
return 0;
}