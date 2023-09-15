#include<iostream>
using namespace std;
class A
{
    public:
    float bonus;
};
class B: public A {
    public:
    float salary;
};
int main()
{
    B b1;
    b1.bonus=12.5;
    b1.salary=90000;
    cout<<b1.bonus<<endl;
    cout<<b1.salary<<endl;
    return 0;
}
