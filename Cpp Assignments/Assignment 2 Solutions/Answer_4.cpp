#include <iostream>
using namespace std;

int main() {

    // Allocate memory for 5 integers
    int *arr = new int[5];

    cout << "Enter 5 integers:" << endl;

    // Taking user input
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "The entered values are:" << endl;

    // Printing values
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Deallocating memory
    delete[] arr;

    return 0;
}