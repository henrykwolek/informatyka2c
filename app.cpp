#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double num1, num2, res;
    char op;

    cout << "Enter first number:\n";
    cin >> num1;
    cout << "Enter operator:\n";
    cin >> op;   
    cout << "Enter second number:\n";
    cin >> num2;
    
    if (op == '+')
    {
        res = num1 + num2;
    } 
    else if (op == '-')
    {
        res = num1 - num2;
    }
    else if (op == '*')
    {
        res = num1 * num2;
    }
    else if (op == '/')
    {
        if (num2 != 0)
        {
            res = num1 / num2;
        }
        else
        {
            cout << "Can't divide by 0";
        }
    }
    
    
    
}