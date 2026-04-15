#include <iostream>
#include <string>
using namespace std;

// Abstract class
class Shape
{
public:
    // Pure virtual functions
    virtual void area() = 0;
    virtual void perimeter() = 0;
};

class Rectangle : public Shape
{
private:
    float length, width;

public:
    void getData()
    {
        cout << "Input Rectangle Length: ";
        cin >> length;
        cout << "Input Rectangle Width: ";
        cin >> width;
    }

    void area()
    {
        cout << "Calculated Area of Rectangle = " << length * width << endl;
    }

    void perimeter()
    {
        cout << "Calculated Perimeter of Rectangle = " << 2 * (length + width) << endl;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    void getData()
    {
        cout << "Input Circle Radius: ";
        cin >> radius;
    }

    void area()
    {
        cout << "Calculated Area of Circle = " << 3.14159 * radius * radius << endl;
    }

    void perimeter()
    {
        cout << "Calculated Circumference of Circle = " << 2 * 3.14159 * radius << endl;
    }
};

int main()
{
    Rectangle rect;
    Circle circ;

    cout << "--- Rectangle Processing ---\n";
    rect.getData();
    rect.area();
    rect.perimeter();

    cout << "\n--- Circle Processing ---\n";
    circ.getData();
    circ.area();
    circ.perimeter();

    return 0;
}