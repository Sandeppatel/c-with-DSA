//  creat a linkedlist
#include <iostream>
using namespace std;

class Node {

    public :
    int data ;
    Node* next ;

//     constructur 
    Node(int data) {
         this -> data = data ;
         this -> next = NULL ;
    }
};

 void insertAthead(Node* &head , int d) {
    //  new node create 
    Node* temp  = new Node(d);
    temp -> next = head ;
    head = temp ;

 }

 void inserAttail(Node* &tail , int d) {
     Node* temp  = new Node(d);
     tail -> next = temp; 
     tail = tail -> next ;
 }

 void print(Node* &head ) {
    Node* temp = head ;

    while(temp != NULL) {
        cout << temp -> data << " " ;
        temp = temp -> next ;
    }
    cout << endl ;
 } 
int main(){
        
    Node* node1 = new Node(10);
    cout << node1 -> data << endl ;
    cout << node1 -> next << endl ;

    //  === head pointed to node1 === 
    Node* head = node1 ;
    Node* tail = node1;
    print(head) ;
     cout << endl ;
    insertAthead(head, 12);
    cout << endl ;
    print(head) ;
  cout << endl ;
    insertAthead(head , 15);
    cout << endl ;
    print(head);
    cout << endl ;

    inserAttail(tail, 12);
    cout << endl ;
    print(head) ;
cout << endl ;
    inserAttail(tail , 15);
    cout << endl ;
    print(head);
    cout << endl ;


    return 0;
}