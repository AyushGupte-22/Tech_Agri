#include<iostream>
using namespace std;
class add
{
    public:
    add(int num1, int num2)
    {
        cout<<"Addition : "<<num1 + num2<<endl;
    }
    add(int num1, double num2)
    {
        cout<<"Addition : "<<num1 + num2<<endl;
    }
    add(double num1, int num2)
    {
        cout<<"Addition : "<<num1 + num2<<endl;
    }
    add(double num1, double num2)
    {
        cout<<"Addition : "<<num1 + num2<<endl;
    }
};
int main()
{
    add a1(11,11);
    add a2(2,2.2);
    add a3(2.2,4);
    add a4(4.4,6.4);
    return 0;
}

