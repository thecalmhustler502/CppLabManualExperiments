#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 44, y = 99;
    float p = 1.23, q = 4.56;
    char c1 = 'M', c2 = 'N';

    // Swapping integers
    cout << "--- Swapping Integer Variables ---" << endl;
    cout << "Initial state: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "Final state: x = " << x << ", y = " << y << endl;

    // Swapping floats
    cout << "\n--- Swapping Float Variables ---" << endl;
    cout << "Initial state: p = " << p << ", q = " << q << endl;
    swapValues(p, q);
    cout << "Final state: p = " << p << ", q = " << q << endl;

    // Swapping characters
    cout << "\n--- Swapping Character Variables ---" << endl;
    cout << "Initial state: c1 = " << c1 << ", c2 = " << c2 << endl;
    swapValues(c1, c2);
    cout << "Final state: c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}