// wap in c++ to design the calculator for arithmetic operations using switch case.
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char op;
    cout << "Enter the operation to perform(e.g.:- 3 + 5) : ";
    cin >> num1 >> op >> num2;
    switch (op)
    {
    case '+':
        cout << num1 << " " << op << " " << num2 << " = " << num1 + num2;
        break;
    case '-':
        cout << num1 << " " << op << " " << num2 << " = " << num1 - num2;
        break;
    case '*':
        cout << num1 << " " << op << " " << num2 << " = " << num1 * num2;
        break;
    case '/':
        cout << num1 << " " << op << " " << num2 << " = " << num1 / num2;
        break;
    default:
        cout << "Invalid input.";
    }
    return 0;
}