#include<iostream>
using namespace std;
class A
{
    public:
    float bonus;
    void dispalayA()
        {
            cout<<"class Derived is made"<<endl;
        }
    
};
class B: public A {
    public:
    float salary;
     void dispalayB()
        {
            cout<<"Derived Class "<<endl;
        }
};
int main()
{
    B b1;
    b1.bonus=12.5;
    b1.salary=90000;
    cout<<b1.bonus<<endl;
    cout<<b1.salary<<endl;
    b1.dispalayA();
    b1.dispalayB();
    return 0;
}



