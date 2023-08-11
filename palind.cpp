#include<iostream>
using namespace std;
int main()
{
    int num,orgi,n,palind=0,ld;
    cout<<"Enter the number to be checked "<<endl;
    cin>>num;
    orgi=num;
    while(num>0){
        ld=num%10;
        palind=palind*10+ld;
        num=num/10;
    }
    if(orgi==palind)
    cout<<"Palindrome"<<endl;
    else
    cout<<"Not Palindrome"<<endl;
    return 0;
}