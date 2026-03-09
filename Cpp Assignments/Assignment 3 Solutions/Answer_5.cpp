#include <iostream>
using namespace std;

class Inspector;   // Forward declaration

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) {
        value = v;
    }

    // Friend function for comparison
    friend bool operator>(Number n1, Number n2);

    // Friend class
    friend class Inspector;

    // Pre-increment
    Number& operator++() {
        ++value;
        return *this;
    }

    // Post-increment
    Number operator++(int) {
        Number temp = *this;
        value++;
        return temp;
    }

    // Assignment operator
    Number& operator=(const Number &n) {
        if (this != &n) {
            value = n.value;
        }
        return *this;
    }
};

// Friend function implementation
bool operator>(Number n1, Number n2) {
    return n1.value > n2.value;
}

// Friend class
class Inspector {
public:
    void show(Number n) {
        cout << "Private value = " << n.value << endl;
    }
};

int main() {

    Number n1(5), n2(10);

    cout << "Original values:" << endl;
    Inspector I;
    I.show(n1);
    I.show(n2);

    // Pre-increment
    cout << "\nPre-increment (++n1)" << endl;
    ++n1;
    I.show(n1);

    // Post-increment
    cout << "\nPost-increment (n1++)" << endl;
    n1++;
    I.show(n1);

    // Assignment operator
    cout << "\nAssigning n1 = n2" << endl;
    n1 = n2;
    I.show(n1);

    // Comparison using friend function
    if (n1 > n2)
        cout << "\nn1 is greater than n2" << endl;
    else
        cout << "\nn1 is not greater than n2" << endl;

    return 0;
}