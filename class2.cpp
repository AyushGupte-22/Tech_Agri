#include<iostream>
#include<conio.h>
using namespace std;
class Area
{
    public:
    double radius;
    double side;
    double length;
    double breadth;

    double calculateCircle()
    {
        return (3.14*radius*radius);  //we take input from user here also 
    }
    double calculateSquare()
    {
        return (side*side);
    }
    double calculateRecatangle()
    {
        return (length*breadth);
    }
};
int main()
{
    Area a;
    cout<<"Enter the radius of the circle: ";
    cin>>a.radius;
    cout<<"Enter the side of the square: ";
    cin>>a.side;
    cout<<"Enter the length of the rectangle: ";
    cin>>a.length;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>a.breadth;
    cout<<"The area of the circle is: "<<a.calculateCircle()<<endl;
    cout<<"The area of the square is: "<<a.calculateSquare()<<endl;
    cout<<"The area of the rectangle is :"<<a.calculateRecatangle()<<endl;
    getch();
    return 0;
}