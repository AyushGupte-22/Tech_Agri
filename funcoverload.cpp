#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    string f_name, l_name, fav_pro_lang;
    int prn, batch1, batch2, sem;

    void data_take(int)
    {
        cout << "Enter the name of student : ";
        cin >> f_name >> l_name;
        cout << "PRN : " << endl;
        cin >> prn;
        cout << "Enter the Batch : ";
        cin >> batch1 >> batch2;
        cout << "Enter the Semester : " << endl;
        cin >> sem;
        cout << "Enter the Favourite Programming Language : " << endl;
        cin >> fav_pro_lang;
    }
    void data_take()
    {
        cout << "The Name of student is : " << f_name << l_name << endl;
        cout << "PRN : " << prn << endl;
        cout << "Batch : " << batch1 << "-" << batch2 << endl;
        cout << "Semester : " << sem << " sem" << endl;
        cout << "The Favourite Programming Language : " << fav_pro_lang << "Prograaming Language" << endl;
        cout << endl;
    }
};

int main()
{
    student s[2];
    for (int i = 0; i < 2; i++)
    {

        cout << " Enter details of Student " << i + 1 << " :-- " << endl;
        s[i].data_take(1);
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 2; i++)
    {

        cout << "Details of Student " << i + 1 << " :-- " << endl;
        s[i].data_take();
    }
    return 0;
}
