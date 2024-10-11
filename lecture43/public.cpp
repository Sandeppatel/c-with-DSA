#include <iostream>
using namespace std;

class Human {
public:
    int height;
    int weight;  // Fixed typo (was 'weigth')
    int age;

    // Getter for height
    int getHeight() {
        return this->height;
    }

    // Setter for weight
    void setWeight(int w) {
        this->weight = w;
    }
};

class Male : public Human {
public:
    string color;

    void sleep() {
        cout << "Male sleeping" << endl;
    }
};

int main() {
    Male object1;

    // Initialize values
    object1.age = 30;
    object1.weight = 75;
    object1.height = 180;
    object1.color = "Fair";

    // Print the values
    cout << "Age: " << object1.age << endl;
    cout << "Weight: " << object1.weight << endl;
    cout << "Height: " << object1.height << endl;
    cout << "Color: " << object1.color << endl;

    // Call sleep method
    object1.sleep();

    return 0;
}
