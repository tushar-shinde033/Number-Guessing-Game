#include <iostream>
using namespace std;
int main()
{
    double num1, num2;
    char operation;
    double result;

    cout << "Enter The First Number: ";
    cin >> num1;
    cout << "Enter The Second Number: ";
    cin >> num2;

    cout << "Choose Operation (+, -, *, /): ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
            return 1;
        }
        break;

    default:
        cout << "Error: Invalid operation." << endl;
        return 1;
    }
    cout << "Result:" << result << endl;
    return 0;
}