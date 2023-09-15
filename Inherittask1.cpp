//Asssignment  1

#include<iostream>
using namespace std;
class shape
{
    public:
        double side = 4.2 ,length= 2.2, breadth=4.12 , radius=12.45;
};
class Area:public shape
{
    private :
     double Sq_area = side*side ,rec_area=length*breadth ,cir_area=3.14*radius*radius;
    public :
     void display(){
        cout<<"Area of Square is : "<<Sq_area<<endl;
        cout<<"Area of Rectangle is : "<<rec_area<<endl;
        cout<<"Area of Circle is : "<<cir_area<<endl;
        }
};
int main()
{
Area ar;
ar.display();
return 0;
}
     
     
     

