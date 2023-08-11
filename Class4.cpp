#include<iostream>
using namespace std;
class Bank
{   public:
    int balance;
    double saving_account(float interest)
    {
        return (balance+(balance*interest));
    }
    double checking_account(float cinterest)
    {
        return (balance+(balance*cinterest));
    }
};
int main()
{
    float f,i;
   Bank emp;
   emp.balance=500000;
   cout<<"Enter the interest for saving "<<endl;
   cin>>f;
   cout<<"Enter the interest for saving "<<endl;
   cin>>i;
   cout<<"Saving account balance is "<<emp.saving_account(f)<<endl;
   cout<<"Checking account balance is "<<emp.checking_account(i)<<endl;
   return 0;
}