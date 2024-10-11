#include <iostream>
using namespace std;
class A {

    public :
    void dark(){
        cout << " barking  " << endl ;
    }
};
class B: public A {

    public :
    void hello(){
        cout << " hui hui hui  " << endl ;
    }
};
class C: public A {

    public :
    void chelo(){
        cout << " moy moy " << endl ;
    }
};


int main(){
 A obj ;
 obj.dark();

 B obj1 ;
 obj1.dark();
 obj1.hello();

 C obj2 ;
 obj2.dark();
 obj2.chelo();


    return 0 ;
}