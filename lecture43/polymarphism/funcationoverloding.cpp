#include <iostream>
using namespace std;

class Student {
public:
    // Method with no parameters
    void stu() {
        cout << "student A" << endl;
    }

    // Method with char and int parameters (no return)
    void stu(char name, int n) {
        cout << "student B " << name << " with number " << n << endl;
    }

    // Method with a string parameter
    void stu(string name) {
        cout << "student C " << name << endl;
    }
};

int main() {
    Student obj;

    // Calling different overloaded methods
    obj.stu();               // Calls the no-parameter version
    obj.stu('X', 10);        // Calls the version with char and int
    obj.stu("John");         // Calls the version with string

    return 0;
}
