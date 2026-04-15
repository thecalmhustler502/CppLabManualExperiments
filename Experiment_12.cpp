#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area computation undefined for generic shape." << endl;
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

    void area() override
    {
        cout << "Computed Area of rectangle = " << length * width << endl;
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

    void area() override
    {
        cout << "Computed Area of circle = " << 3.14159 * radius * radius << endl;
    }
};

int main()
{
    Shape *s1, *s2;   
    Rectangle rect(14, 8);
    Circle circ(5);

    s1 = &rect;
    s2 = &circ;

    cout << "--- Virtual Function Demonstration ---\n";
    s1->area();  
    s2->area(); 

    return 0;
}