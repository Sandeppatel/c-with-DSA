/*
#include <iostream>
using namespace std;

class Hero {
    // properties
    int health ;
};

int main(){
 Hero h1 ;
 cout << " size of : " << sizeof(h1) << endl ;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

class Hero {
    // properties empty
    // int health ;
};

int main(){
 Hero h1 ;
 cout << " size of : " << sizeof(h1) << endl ;
    return 0;
}
*/
/*
#include <iostream>
 using namespace std ;

 class Hero {

    public :
    int health;
    int level ;
    void print(){
        cout << level << endl ;
    }
 };

 int main(){

    Hero ramesh ;
    ramesh.health = 50 ;
     ramesh.level = 'A' ;
    cout << " health is  :" << ramesh.health << endl ;
    cout << " health is  :" << ramesh.level << endl ;

    return 0;
 }
 */

// ======== use geter and seter =======
/*
#include <iostream>
 using namespace std ;

 class Hero {
    private :
    int health;
    public :
    int level ;
    void print(){
        cout << level << endl ;
    }

    int getHealth(){
        return  health ;
    }
    char getLevel(){
        return level ;
    }
    int setHealth( int h){
     health = h ;
    };
    char setLevel(char ch){
         level  = ch ;
    };
 };

 int main(){

    Hero ramesh ;
    cout << "  ramesh is health : " << ramesh.getHealth() << endl;
    ramesh.setHealth(50);
    ramesh.setLevel('B');

    //  ramesh.level = 'A' ;
    cout << " health is  :" <<  ramesh.getHealth() << endl ;
    cout << " level. is  :" << ramesh.level << endl ;

    return 0;
 }
 */

//  ========= static and dynamic allocation parametaized constracture ==============
/*
#include <iostream>
 using namespace std ;

 class Hero {
    private :
    int health;
    public :
    int level ;
    void print(){
        cout << level << endl ;
    }

    Hero(){
        cout << " constructor called : " << endl ;
    }

    int getHealth(){
        return  health ;
    }
    char getLevel(){
        return level ;
    }
    int setHealth( int h){
     health = h ;
    };
    char setLevel(char ch){
         level  = ch ;
    };
 };

 int main(){


//  static allocation
  Hero a  ;
  a.setLevel('A');
  a.setHealth(70);
   cout << " level is : " << a.level <<" " <<  a.getLevel() << endl ;
   cout << " health is : " << a.getHealth() << endl ;



//     dynamicly allocation
Hero *b = new Hero ;

b->setHealth(120);
b->setLevel('A');

 cout << " level is :" << (*b).level << endl;
 cout << " health is :" << (*b).getHealth() << endl;

 cout << " level is :" << b->level << endl;
 cout << " health is :" << b->getHealth() << endl;

    return 0;
 }
*/
/*
#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    int level;
    void print()
    {
        cout << level << endl;
    }

    Hero()
    {
        cout << " constructor called : " << endl;
    }
    Hero(int health)
    {
        cout << "this -> " << this << endl;
        this->health = health;
    }

    Hero (int health , char level){
        this -> level  = level ;
        this -> health = health ;
    }

    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    int setHealth(int h)
    {
        health = h;
    };
    char setLevel(char ch)
    {
        level = ch;
    };
};

int main()
{

    //  boject creat statcally

    Hero ramesh(10);
    // cout << " address of ramesh " << &ramesh << endl;
    ramesh.getHealth();

    // cout << " address of ramesh " << &ramesh << endl;
    ramesh.getHealth();
    ramesh.getLevel();

         Hero temp(22 , 'B');
         temp.print();

    //    dynamically
    Hero *h = new Hero(11);
    temp.print();
    return 0;
}
*/

//  ========= static and dynamic allocation copy constracture ==============
/*
#include <iostream>
using namespace  std ;

class Hero {
  private :
  int health ;
  public :
  char level ;

   Hero(int health , char level){
    this -> level = level ;
    this -> health = health;
   }

  void print(){
    cout << " health " << this->health << endl ;
    cout << " level " << this->level << endl ;
  }
//  copy
Hero(Hero& temp){
    this->health = temp.health;
    this->level = temp.level;
}

   int getHealth(){
    return health ;
   }
   char getLevel(){
    return level ;
   }
   int setHealth(int h){
     health  = h;
   }
   char setLevel(char ch){
    level = ch ;
   }
};

int main(){
    Hero sourabh(20 , 'c') ;
    //  sourabh.setHealth(50);
    //  sourabh.setLevel('c');

    //  cout << " level " << sourabh.level << endl ;
    //  cout << " health " << sourabh.getHealth() << endl ;

    sourabh.print();

//   call copy constructure
     Hero R(sourabh);
    R.print();

    return 0;
}
*/
/*
#include <iostream>
#include <cstring> // For strcpy
using namespace std;

class Hero {
  private:
    int health;
    char name[100]; // Added name variable

  public:
    char level;

    // Parametrized constructor
    Hero(int health, char level) {
        this->level = level;
        this->health = health;
    }

    // Copy constructor
    Hero(Hero& temp) {
        this->health = temp.health;
        this->level = temp.level;
        strcpy(this->name, temp.name); // Copy name
    }

    // Method to set the name
    void setName(char name[]) {
        strcpy(this->name, name);
    }

    // Method to print details
    void print() {
        cout << "Name: " << this->name << endl;
        cout << "Health: " << this->health << endl;
        cout << "Level: " << this->level << endl;
    }

    // Getter and setter for health
    int getHealth() {
        return health;
    }

    void setHealth(int h) {
        health = h;
    }

    // Getter and setter for level
    char getLevel() {
        return level;
    }

    void setLevel(char ch) {
        level = ch;
    }
};

int main() {
    Hero hero1(12, 'D');
    char name[7] = "Babbar";
    hero1.setName(name);
    hero1.print();

    // Creating hero2 using the copy constructor
    Hero hero2(hero1);
    hero2.print();

    // Changing name in hero1 and checking effect on hero2
    hero1.setName("Gabbar"); // Change name to "Gabbar"
    hero1.print();
    hero2.print();

    return 0;
}
*/

//  copy asssignment operator
/*
#include <iostream>
#include <cstring> // For strcpy
using namespace std;

class Hero
{
private:
    int health;
    char name[100]; // Added name variable

public:
    char level;
      char *name ;

    // Parametrized constructor
    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // Copy constructor
    Hero(Hero &temp)
    {
        this->health = temp.health;
        this->level = temp.level;
        strcpy(this->name, temp.name); // Copy name
    }

    // Method to set the name
    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    // Method to print details
    void print()
    {
        cout << "Name: " << this->name << endl;
        cout << "Health: " << this->health << endl;
        cout << "Level: " << this->level << endl;
    }

    // Getter and setter for health
    int getHealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }

    // Getter and setter for level
    char getLevel()
    {
        return level;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{
    Hero hero1(12, 'D');
    char name[7] = "Babbar";
    hero1.setName(name);
    // hero1.print();

    // Creating hero2 using the copy constructor
    Hero hero2(hero1);
    // hero2.print();

    // Changing name in hero1 and checking effect on hero2
    hero1.setName("Gabbar"); // Change name to "Gabbar"

    hero1.print();
    hero2.print();

    hero1 = hero2;

    hero1.print();
    hero2.print();
    return 0;
}
*/

// =============== ~ distructure ========= memory ko de-allocat karne ke liye distructure use hota hai
//  memory free karvana 
/*
#include <iostream>
#include <cstring> // For strcpy
using namespace std;

class Hero
{
private:
    int health;
    char name[100]; // Added name variable

public:
    char level;
    static int timeToComplete;

    // Default constructor
    Hero() {
        cout << "Default constructor called!" << endl;
    }

    // Parametrized constructor
    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // Copy constructor
    Hero(Hero &temp)
    {
        this->health = temp.health;
        this->level = temp.level;
        strcpy(this->name, temp.name); // Copy name
    }

    // Method to set the name
    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    // Method to print details
    void print()
    {
        cout << "Name: " << this->name << endl;
        cout << "Health: " << this->health << endl;
        cout << "Level: " << this->level << endl;
    }

    // Getter and setter for health
    int getHealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }

    // Getter and setter for level
    char getLevel()
    {
        return level;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    // Destructor
    ~Hero()
    {
        cout << "Destructor called!" << endl;
    }
};

// Definition of the static member
int Hero::timeToComplete = 5;

int main()
{
    // Access static member using the class name
    cout << Hero::timeToComplete << endl;

    // Create an object using the default constructor
    Hero a;
    
    // You can also access static members via an object, though it's better to use the class name
    cout << a.timeToComplete << endl;  // Valid but not recommended, prefer Hero::timeToComplete

    Hero b;
    b.timeToComplete = 10 ;
    cout << a.timeToComplete << endl ;
    cout << b.timeToComplete << endl ;

    return 0;
}
*/

//===========  static funcation ==========

#include <iostream>
#include <cstring> // For strcpy
using namespace std;

class Hero
{
private:
    int health;
    char name[100]; // Added name variable

public:
    char level;
    static int timeToComplete;

    // Default constructor
    Hero() {
        cout << "Default constructor called!" << endl;
    }

    // Parametrized constructor
    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // Copy constructor
    Hero(Hero &temp)
    {
        this->health = temp.health;
        this->level = temp.level;
        strcpy(this->name, temp.name); // Copy name
    }

    // Method to set the name
    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    // Method to print details
    void print()
    {
        cout << "Name: " << this->name << endl;
        cout << "Health: " << this->health << endl;
        cout << "Level: " << this->level << endl;
    }

    // Getter and setter for health
    int getHealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }

    // Getter and setter for level
    char getLevel()
    {
        return level;
    }

    void setLevel(char ch)
    {
        level = ch;
    }

    // Destructor
    ~Hero()
    {
        cout << "Destructor called!" << endl;
    }
};

// Definition of the static member
int Hero::timeToComplete = 5;

int main()
{
    // Access static member using the class name
    cout << Hero::timeToComplete << endl;

    // Create an object using the default constructor
    Hero a;
    
    // You can also access static members via an object, though it's better to use the class name
    cout << a.timeToComplete << endl;  // Valid but not recommended, prefer Hero::timeToComplete

    Hero b;
    b.timeToComplete = 10 ;
    cout << a.timeToComplete << endl ;
    cout << b.timeToComplete << endl ;

    return 0;
}
