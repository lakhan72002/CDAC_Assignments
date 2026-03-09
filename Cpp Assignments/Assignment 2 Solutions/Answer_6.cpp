#include <iostream>
using namespace std;

class Employee {
private:
    const int employeeId;
    string name;
    float salary;

public:
    // Constructor using initializer list
    Employee(int id, string n, float s) : employeeId(id), name(n), salary(s) {
    }

    // Function to print details
    void display() {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {

    Employee e1(101, "Lakhan", 50000);

    e1.display();

    return 0;
}