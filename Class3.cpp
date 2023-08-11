//Assignment 3 (D)

#include<iostream>
using namespace std;
class Circle
{
    private:
       double radius;
    public:
       double compute_area()
       {
        cout<<"Enter the radius :"<<endl;
        cin>>radius;
        return 3.14*radius*radius;
       }
};
int main()
{
    Circle obj; // if i assign value here as obj.radius=10.5 it will give error because radius is private
    cout<<"Area is : "<<obj.compute_area()<<endl;
}