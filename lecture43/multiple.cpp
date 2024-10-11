#include <iostream>
using namespace std;
class Animal {
    public :
    int age ;
    int weight ;

    public :
    void dark(){
        cout << " barking  " << endl ;
    }
};
class Human {
 
 public :
 string color ;
 public :
 void speak() {
    cout << " speaking " << endl ;
 }
};
// multiple 
 class multiple: public Animal , public Human {

 };

int main(){
 
 multiple  obj ;
 obj.dark();
 obj.speak();


    return 0 ;
}