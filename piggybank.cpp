#include<iostream>
using namespace std;
class add_amount 
{
    private:
        double amount = 50;

    public:
        add_amount()
        {
            amount = amount;
            cout<<"Amount without adding any money : "<<amount<<endl;
        }
        
        add_amount(double amt)
        {
            amount += amt;
        }
        add_amount(int amt)
        {
            amount += amt;
        }
        void display()
        {
            cout<<"Total amount : $"<<amount<<endl;
        }
};
int main()
{
    add_amount amt1;
    add_amount amt2(150);
    cout<<"Piggy Bank 1 :-\n";
    amt1.display();
    cout<<"\nPiggy Bank 2 :-\n";
    amt2.display();
    return 0;
}
