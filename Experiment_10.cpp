#include <iostream>
using namespace std;

class Calculator
{
public:
    // Function to add two integers
    int add(int a, int b)
    {
        return a + b;
    }

    // Fx to add three integers
    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    // Fx to add two floating-point numbers
    float add(float a, float b)
    {
        return a + b;
    }
};

class Shape
{
public:
    // Virtual function for area
    virtual void area()
    {
        cout << "Area of generic base shape" << endl;
    }
};

class Rectangle : public Shape
{
private:
    float length, width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    // Overriding the area function
    void area() override
    {
        cout << "Area of rectangle = " << length * width << endl;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    // Overriding the area function
    void area() override
    {
        cout << "Area of circle = " << 3.14159 * radius * radius << endl;
    }
};

int main()
{
    // Compile-time polymorphism demonstration
    Calculator calc;
    cout << "--- Compile-Time Polymorphism (Function Overloading) ---\n";
    cout << "Sum of 2 integers: " << calc.add(15, 25) << endl;
    cout << "Sum of 3 integers: " << calc.add(8, 12, 20) << endl;
    cout << "Sum of 2 floats: " << calc.add(4.2f, 5.8f) << endl;

    // Run-time polymorphism demonstration
    Shape *s1, *s2;
    Rectangle rect(12, 6);
    Circle circ(9);

    s1 = &rect;
    s2 = &circ;

    cout << "\n--- Run-Time Polymorphism (Function Overriding) ---\n";
    s1->area();
    s2->area();

    return 0;
}