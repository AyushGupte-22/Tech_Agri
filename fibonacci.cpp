// wap in c++ to print the fibonacci series upto n numbers using for loop.
#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, n, t;
    cout << "Enter the limit to print the fibonacci series : ";
    cin >> n;
    cout << "Fibonacci series : ";
    while (n >= a)
    {
        cout << a << " ";
        t = a;
        a = b;
        b = b + t;
    }
    return 0;
}