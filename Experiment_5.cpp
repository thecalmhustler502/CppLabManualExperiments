#include <iostream>
using namespace std;

class Student
{
private:
    static int count;  

public:
    Student()
    {
        count++;   
    }

    static void showCount()
    {
        cout << "Total number of registered students: " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    // Instantiating 5 objects instead of 3
    Student s1;   
    Student s2;  
    Student s3;
    Student s4;
    Student s5;

    Student::showCount();

    return 0;
}