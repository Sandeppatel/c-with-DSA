
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    //   compalsari hota hai ======== constracter ===========
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};
// ========= for ptinting ========
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}
//   insertion  part  linklist
void insertAthead(Node *&head , int d)
{
    if (head == NULL)
    {
      Node* temp =  new Node(d);
      head = temp ;
        
    }else{

    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }
    
}
//  insertion are increging way
void insertAttail(Node *&tail, int d)
{

    if (tail == NULL)
    {
      Node* temp =  new Node(d);
      tail = temp ;
        
    }else{

   Node* temp = new Node(d);
    tail->next = temp ;
    temp->prev = tail ;
    tail = temp;
    }


}

// ========= insert any position =========
// void insertAtPosition(Node* &tail , Node* &head , int position , int d ){
//     //  insert at start
//     if (position == 1)
//     {
//         insertAthead(head , d);
//         return ;
//     }
//     Node* temp = head ;
//     int cnt = 1;


//     while (cnt < position-1)
//     {
//         temp = temp -> next;
//         cnt++;

//     }
//     //  inserting at last position 
//     if(temp->next == NULL){
//         insertAttail(tail , d);
//         return ;
//     }
//     //  creating a node for d

//         Node* nodeToInsert   = new Node(d);
//         nodeToInsert->next = temp ->next ;
//         temp -> next->prev = nodeToInsert ;
//         temp->next = nodeToInsert;
//         nodeToInsert -> prev = temp;

// }
int main()
{

    // Node *node1 = new Node(10);
    Node *head = NULL;
    Node* tail = NULL ;


    print(head);
    cout << getLength(head) << " " << endl;

    insertAthead(head, 11);
    print(head);

    insertAthead(head, 13);
    print(head);

    insertAthead(head, 8);
    print(head);

    cout << endl ;

    insertAttail(tail, 25);
    print(head);

   
//     insertAtPosition(tail , head , 2 , 100);
//    print(head);

//     insertAtPosition(tail , head , 1 , 50);
//    print(head);
   
    return 0;
}