/*
#include <iostream>
using namespace std;


class Animal {
   
    public :
    int add(){
         cout << "spiking " << endl ;
    }

};
class Dog{
   
    public :
    int add(){
         cout << " barking  " << endl ;
    }

};

int main() {
 
 Dog obj ;
 obj.add();
   
    return 0;
}
*/
#include <iostream>
using namespace std;

class Animal {
public:
    // Use virtual keyword to allow overriding
    virtual void add() {
        cout << "Animal is speaking" << endl;
    }
};

class Dog : public Animal {
public:
    // Override the base class function
    void add() override {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Dog obj;
    obj.add();  // Calls the overridden function in Dog class

    return 0;
}
