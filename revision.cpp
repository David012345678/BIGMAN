 #include<iostream>
#define Pie 3.142
using namespace std;

double calculation(double,double);
double calculation(double ba,double h)
{
return(0.5*ba*h);
}
int calculation(int,int);
int calculation(int l,int w)
{
    return (l*w);
    }   
float calculation(float);
float calculation(float a)
{
return (Pie*a*a);
    
}

int main()
{
    //area of the circle
    float Radius;
    cout<<"Enter the  radius of the circle\n";
    cin>>Radius;
    cout<<"The area of a circle is =\n"<<calculation(Radius);
    cout<<"\n";
    //area of the triangle
        int length,width;
    cout<<"Enter the length of the rectangle\n";
    cin>>length;
    cout<<"Enter the width of the rectangle\n";
    cin>>width;
     cout<<"\n The area of the rectangle="<<calculation(length,width);
     cout<<"\n";
     //area of the triangle
     double base,height;
     cout<<"Enter the base of the triangle\n";
    cin>>base;
    cout<<"Enter the height of the triangle\n";
    cin>>height;
     cout<<"\n The area of a triangle="<<calculation(base,height);
     
    return 0;
}


