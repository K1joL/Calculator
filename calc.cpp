#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper;

    cout << "CALCULATOR\n";
    
    Calculator c;
    while (true)
    {
        cout << "Please enter one of the operation to perform:| a + b | a - b | a * b | a / b | a % b |\n";

        cin >> x >> oper >> y;
        result = c.Calculate(x, oper, y);
        
        if ((oper == '+') or (oper == '-') or (oper == '*') or (oper == '/') or (oper == '%'))
        {
            if ((oper == '/') and (y == 0)) 
            {
                cout << "Cannot divide by zero.\n";
            }
            else
            {
                cout << x << oper << y << " = " << result << endl;
            }
        }
    }
    return 32;
}
