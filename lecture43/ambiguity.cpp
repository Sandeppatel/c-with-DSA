#include <iostream>
using namespace std;
class A {

    public :
    void dark(){
        cout << " I'm is A " << endl ;
    }
};
class B {

   public :
    void dark(){
        cout << " I'm is B " << endl ;
    }
};
class C: public A , public B {

};


int main(){
  
  C obj ;
//   obj.dark();
  obj.A::dark();
  obj.B::dark();


    return 0 ;
}