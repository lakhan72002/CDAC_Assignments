#include <iostream>
#include <fstream>
using namespace std;

class Student {
private:
    int roll;
    string name;
    float marks;

public:
    // Parameterized Constructor
    Student(int r, string n, float m) {
        roll = r;
        name = n;
        marks = m;
    }

    // Function to write details to file
    void writeToFile(ofstream &out) {
        out << roll << " " << name << " " << marks << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destroying student ..." << endl;
    }
};

int main() {

    // 1. Create array of 3 Student objects
    Student s[3] = {
        Student(1, "Aman", 85),
        Student(2, "Rahul", 90),
        Student(3, "Neha", 88)
    };

    // 2. Write student details to file
    ofstream fout("students.txt");

    for(int i = 0; i < 3; i++) {
        s[i].writeToFile(fout);
    }

    fout.close();

    // 3. Read file again and print contents
    ifstream fin("students.txt");

    string line;
    cout << "Contents of file:" << endl;

    while(getline(fin, line)) {
        cout << line << endl;
    }

    fin.close();

    return 0;
}