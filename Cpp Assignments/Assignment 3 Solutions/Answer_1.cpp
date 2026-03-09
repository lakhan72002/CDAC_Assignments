#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    mutable int accessCount;   // can be modified in const function

public:
    // Constructor
    Employee(int i, string n) {
        id = i;
        name = n;
        accessCount = 0;
    }

    // User-defined copy constructor
    Employee(const Employee &e) {
        id = e.id;
        name = e.name;
        accessCount = e.accessCount;
        cout << "User-defined Copy Constructor Called" << endl;
    }

    // const function
    void display() const {
        accessCount++;   // allowed because it is mutable
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Access Count: " << accessCount << endl;
        cout << "-------------" << endl;
    }
};

int main() {

    // Task 1
    Employee e1(101, "Lakhan");

    cout << "Calling display on e1 multiple times:\n";
    e1.display();
    e1.display();
    e1.display();

    // Task 2
    cout << "\nCreating e2 = e1\n";
    Employee e2 = e1;   // copy constructor called

    cout << "\nDisplaying e2:\n";
    e2.display();

    cout << "\nDisplaying e1 again:\n";
    e1.display();

    return 0;
}