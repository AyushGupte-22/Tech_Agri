#include<iostream>
using namespace std;
class automobile {     //base class
    public: 
        int no_of_car ,no_of_bike;

        void get_data(){
            cout<<"Enter the number of car : "<<endl;
            cin>>no_of_car;
            cout<<"Enter the number of bike : "<<endl;
            cin>>no_of_bike;
        }
};
class production : public automobile {
    public :                                  // derived class
    int total_bike ,total_car,total_sell;
       void calculation()
       {
        total_bike= no_of_bike * 80000;
        total_car= no_of_car *  100000;
        total_sell = total_bike + total_car;
       }

       void dispaly()
       {
        cout<<"The total sell of company  : "<< total_sell<<endl;
       }
};
int main()
{
    production s;
    s.get_data();
    s.calculation();
    s.dispaly();
    return 0;
}
      
