#include <iostream>
using namespace std;

int main() {
    
    int num = 10;          // Integer variable
    int *ptr = &num;       // Pointer to the variable
    int &ref = num;        // Reference to the same variable

    cout << "Initial value of num: " << num << endl;

    // Modify using pointer
    *ptr = 20;
    cout << "After modifying using pointer: " << num << endl;

    // Modify using reference
    ref = 30;
    cout << "After modifying using reference: " << num << endl;

    return 0;
}