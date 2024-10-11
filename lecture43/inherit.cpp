/*
#include <iostream>
using namespace std;

class Human {
public:
    int height;
    int weight;  // Fixed typo (was 'weigth')
    
    private : 
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
    Male  m1 ;
    cout << m1.height<< endl ;

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

class Human {
public:
    int height;
    int weight;  // Fixed typo (was 'weigth')
    
    private : 
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

class Male : protected Human {
public:
    string color;

    void sleep() {
        cout << "Male sleeping" << endl;
    }
    int getHeight(){
      return  this->height ;
    }
};

int main() {
    Male  m1 ;
    cout << m1.getHeight() << endl ;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Human {
    protected : 
    int height;
public:
    int weight;  // Fixed typo (was 'weigth')
    
    private : 
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
    int getHeight(){
        return this->height ;
    }
};

int main() {
    Male  m1 ;
    cout << m1.getHeight()<< endl ;

    return 0;
}
*/
#include <iostream>
using namespace std;

class Human {
    protected : 
    int height;
public:
    int weight;  // Fixed typo (was 'weigth')
    
    private : 
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
    int getHeight(){
        return this->height ;
    }
};

int main() {
    Male  m1 ;
    cout << m1.getHeight()<< endl ;

    return 0;
}