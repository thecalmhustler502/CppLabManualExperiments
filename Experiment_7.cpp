#include <iostream>
using namespace std;

class Complex
{
private:
    float real;   // Real part
    float imag;   // Imaginary part

public:
    // Default constructor
    Complex()
    {
        real = 0;
        imag = 0;
    }

    // Parameterized constructor
    Complex(float r, float i)
    {
        real = r;
        imag = i;
    }

    // Operator overloading for addition
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Operator overloading for multiplication
    Complex operator*(Complex c)
    {
        Complex temp;
        // (a+bi)(c+di) = (ac - bd) + (ad + bc)i
        temp.real = real * c.real - imag * c.imag;
        temp.imag = real * c.imag + imag * c.real;
        return temp;
    }

    // Friend function to overload >> for input
    friend istream& operator>>(istream &in, Complex &c)
    {
        cout << "Enter the real part: ";
        in >> c.real;
        cout << "Enter the imaginary part: ";
        in >> c.imag;
        return in;
    }

    // Friend function to overload << for output
    friend ostream& operator<<(ostream &out, Complex c)
    {
        out << c.real;
        if (c.imag >= 0)
            out << " + " << c.imag << "i";
        else
            out << " - " << -c.imag << "i";
        return out;
    }
};

int main()
{
    Complex c1, c2, sum, product;

    cout << "--- Define the First Complex Number ---\n";
    cin >> c1;

    cout << "\n--- Define the Second Complex Number ---\n";
    cin >> c2;

    // addition
    sum = c1 + c2;

    // multi
    product = c1 * c2;

    cout << "\nAddition Result : " << sum << endl;
    cout << "Multiplication Result : " << product << endl;

    return 0;
}