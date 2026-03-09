#include <iostream>
using namespace std;

// Custom Exception Class
class DivideByZero {};

// Function with exception specification
int divide(int a, int b) throw(DivideByZero) {
    if (b == 0) {
        throw DivideByZero();
    }
    return a / b;
}

int main() {

    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    try {
        try {
            int result = divide(num1, num2);
            cout << "Result = " << result << endl;
        }
        catch (DivideByZero) {
            cout << "Inside inner catch" << endl;
            throw;   // Rethrow exception
        }
    }
    catch (DivideByZero) {
        cout << "Handled in outer catch" << endl;
    }

    return 0;
}