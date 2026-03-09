#include <iostream>
using namespace std;

class Vector {
private:
    int *arr;
    int size;

public:
    // Constructor
    Vector(int s) {
        size = s;
        arr = new int[size];
    }

    // Destructor
    ~Vector() {
        delete[] arr;
    }

    // Operator [] to access elements
    int& operator[](int index) {
        return arr[index];
    }

    // Operator () to compute sum
    int operator()() {
        int sum = 0;
        for (int i = 0; i < size; i++)
            sum += arr[i];
        return sum;
    }
};

int main() {

    Vector v(5);

    // Initialize values
    for(int i = 0; i < 5; i++)
        v[i] = (i + 1) * 10;

    // Demonstration
    v[2] = 50;        // modify element

    cout << "Elements: ";
    for(int i = 0; i < 5; i++)
        cout << v[i] << " ";

    cout << endl;

    cout << "Sum = " << v();   // operator()

    return 0;
}