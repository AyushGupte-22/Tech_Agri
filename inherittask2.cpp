#include<iostream>
#include<string>
using namespace std;
class calculate_sal
{
    protected:
        string name[5];
        string designation[5];
        double da,hra,basic;  

    public:void get_data()
    {
        for(int i=0;i<5;i++){
        cout<<"Enter the name of the Employee "<<i+1<< " : "<<endl;
        getline(cin, name[i]);
        cout<<"Enter the Designsation for Employee "<<i+1<< " : "<<endl;
        getline (cin ,designation [i] );
        cout<<"Enter the basicsal da and hra for Employee "<<i+1<< " : "<<endl;
        cin>>da >>hra>>basic;
        }
    }
};
class organization:public calculate_sal
{
    private:
        double total_salary;
        int bonus1 =5000 , bonus2=3000;
        
    public :
         void dispaly()
         {
            if(basic > 25000)
            {
                total_salary= basic + da + hra + bonus1;
            }
            else 
            {
                total_salary= basic + da + hra + bonus2;
            }
            
         }
};

int main()
{
    organization sal;
    sal.get_data();
    sal.dispaly();
    return 0;
}