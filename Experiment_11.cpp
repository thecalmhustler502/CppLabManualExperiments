#include <iostream>
using namespace std;

class Shape
{
public:
    // Virtual function to display shape type
    virtual void display()
    {
        cout << "Generic Shape Base Class." << endl;
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

    void display() override
    {
        cout << "Rectangle instantiated with length " << length
             << " and width " << width << "." << endl;
    }

    float area()
    {
        return length * width;
    }

    // Operator overloading for + (adding areas of two rectangles)
    float operator+(Rectangle r)
    {
        return this->area() + r.area();
    }
};

int main()
{
    // Operator Overloading demonstration
    Rectangle rect1(8, 12);
    Rectangle rect2(6, 5);

    float totalArea = rect1 + rect2;  

    cout << "--- Testing Operator Overloading ---" << endl;
    cout << "Computed Area of rect1: " << rect1.area() << endl;
    cout << "Computed Area of rect2: " << rect2.area() << endl;
    cout << "Combined area (rect1 + rect2): " << totalArea << endl;

    Shape *s;
    Rectangle rect3(9, 3);
    s = &rect3;  

    cout << "\n--- Testing Function Overriding ---" << endl;
    s->display();   

    return 0;
}