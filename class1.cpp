#include<iostream>
#include<conio.h>
using namespace std;
class Room
{
    public:
    double length; 
    double breadth;
    double height;

    double calculateArea()
    {
        return length*breadth;
    }
    double calculatevolume()
    {
        return length*breadth*height;
    }
};
int main()
{
    Room r1;
    r1.length=12;
    r1.breadth=5;
    r1.height=6;
    cout<<"Area of Room : "<<r1.calculateArea()<<endl;
    cout<<"Volume of Room : "<<r1.calculatevolume()<<endl;
    getch();
    return 0;
}