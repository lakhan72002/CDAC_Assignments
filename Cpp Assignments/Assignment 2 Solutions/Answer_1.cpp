#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;
    int height;

public:
    // Parameterized Constructor
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    // Function to set dimensions using this->
    void setDimensions(int length, int width, int height) {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    // Function to calculate volume
    int volume() {
        return length * width * height;
    }
};

int main() {

    // Initialization using constructor
    Box b1(2, 3, 4);
    cout << "Volume using constructor: " << b1.volume() << endl;

    // Assignment using setDimensions()
    b1.setDimensions(5, 6, 7);
    cout << "Volume after setDimensions(): " << b1.volume() << endl;

    return 0;
}