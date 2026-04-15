#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    int rollNo;
    string name;

public:
    void getStudentInfo()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);
    }
};

class Marks : public Student
{
private:
    float marks[4]; // Changed array size
    float total;

public:
    void getMarks()
    {
        total = 0;
        for (int i = 0; i < 4; i++) // Updated loop length
        {
            cout << "Enter marks of subject " << i + 1 << " (out of 100): ";
            cin >> marks[i];
            total += marks[i];
        }
    }

    void display()
    {
        cout << "\n--- Final Student Report ---\n";
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : ";
        for (int i = 0; i < 4; i++) // Updated loop length
        {
            cout << marks[i] << " ";
        }
        cout << "\nTotal Marks : " << total << " / 400" << endl;
        cout << "Percentage  : " << (total / 4) << "%\n"; // Adjusted divisor
    }
};

int main()
{
    Marks student;

    student.getStudentInfo();
    student.getMarks();
    student.display();

    return 0;
}