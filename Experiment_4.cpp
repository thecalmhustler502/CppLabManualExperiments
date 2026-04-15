#include <iostream>
using namespace std;

class Calculator
{
private:
    float a, b;   

public:
    void getData(float val1, float val2)
    {
        a = val1;
        b = val2;
    }

    // Inline function for addition
    inline float add()
    {
        return a + b;
    }

    // Inline function for subtraction
    inline float subtract()
    {
        return a - b;
    }

    // Inline function for multiplication
    inline float multiply()
    {
        return a * b;
    }

    // Inline function for division
    inline float divide()
    {
        return a / b;
    }
};

int main()
{
    Calculator calc;  
    float num1, num2;

    cout << "Please input two numbers for calculation: ";
    cin >> num1 >> num2;

    calc.getData(num1, num2);

    cout << "\nResult of Addition = " << calc.add();
    cout << "\nResult of Subtraction = " << calc.subtract();
    cout << "\nResult of Multiplication = " << calc.multiply();
    cout << "\nResult of Division = " << calc.divide() << endl;

    return 0;
}