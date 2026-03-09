#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char *str;

public:
    // Constructor
    String(const char *s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Copy Constructor (Deep Copy)
    String(const String &s) {
        str = new char[strlen(s.str) + 1];
        strcpy(str, s.str);
    }

    // Destructor
    ~String() {
        delete[] str;
    }

    // Assignment Operator
    String& operator=(const String &s) {
        if (this != &s) {
            delete[] str;
            str = new char[strlen(s.str) + 1];
            strcpy(str, s.str);
        }
        return *this;
    }

    // Concatenation Operator
    String operator+(const String &s) {
        char *temp = new char[strlen(str) + strlen(s.str) + 1];
        strcpy(temp, str);
        strcat(temp, s.str);

        String result(temp);
        delete[] temp;
        return result;
    }

    // Output Operator
    friend ostream& operator<<(ostream &out, const String &s) {
        out << s.str;
        return out;
    }

    // Input Operator
    friend istream& operator>>(istream &in, String &s) {
        char temp[100];
        in >> temp;

        delete[] s.str;
        s.str = new char[strlen(temp) + 1];
        strcpy(s.str, temp);

        return in;
    }
};

int main() {

    String s1, s2, s3;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    // Concatenation
    s3 = s1 + s2;

    cout << "\nStrings are:\n";
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    cout << "s3 = " << s3 << endl;

    return 0;
}