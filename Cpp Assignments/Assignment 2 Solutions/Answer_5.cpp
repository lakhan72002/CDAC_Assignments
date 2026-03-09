#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:

    // 1. Default Constructor
    Student() {
        rollNo = 0;
        name = "Not Assigned";
        marks = 0;
    }

    // 2. Parameterized Constructor
    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    // 3. Constructor using this-> pointer
    Student(int rollNo, string name, float marks, int x) {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }

    // 4. Function to print student details
    void printDetails() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "-------------------" << endl;
    }
};

int main() {

    // Object using default constructor
    Student s1;

    // Objects using parameterized constructor
    Student s2(101, "Rahul", 85.5);
    Student s3(102, "Anita", 92.0, 0);   // using constructor with this->

    cout << "Student 1 Details:" << endl;
    s1.printDetails();

    cout << "Student 2 Details:" << endl;
    s2.printDetails();

    cout << "Student 3 Details:" << endl;
    s3.printDetails();

    return 0;
}