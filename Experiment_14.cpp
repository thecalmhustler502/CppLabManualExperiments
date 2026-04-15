#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    float result;

    cout << "Please provide the numerator: ";
    cin >> num1;

    cout << "Please provide the denominator: ";
    cin >> num2;

    try
    {
        // Check for division by zero
        if (num2 == 0)
            throw "Fatal Error: Cannot divide by zero!";
        else
        {
            result = (float)num1 / num2;
            cout << "Calculation Result = " << result << endl;
        }
    }
    catch (const char *msg)
    {
        // Catching the exception
        cout << msg << endl;
    }

    return 0;
}