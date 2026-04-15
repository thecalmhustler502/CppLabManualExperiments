#include <iostream>
using namespace std;


class Sample
{
private:
    int a, b;  

public:
    Sample(int x, int y)
    {
        a = x;
        b = y;
    }

    friend void showData(Sample s);
};

void showData(Sample s)
{
    cout << "Value of first number (a) = " << s.a << endl;
    cout << "Value of second number (b) = " << s.b << endl;
    cout << "Calculated Sum = " << (s.a + s.b) << endl;
}

int main()
{
    // Changed hardcoded values
    Sample obj(55, 45);

    showData(obj);

    return 0;
}