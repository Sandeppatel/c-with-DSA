#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    // Destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

// Function to detect a loop in the linked list
bool detectLoop(Node *head)
{
    if (head == NULL)
        return false;

    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << " present on element " << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node *floydDetectLoop(Node *head)
{
    if (head == NULL)
        return NULL;

    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            cout << " present it's " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}

// begining /starting node of loop in linkedlist
Node *getStartingNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;

        Node *intersection = floydDetectLoop(head);
        Node *slow = head;

        while (slow != intersection)
        {
            slow = slow->next;
            intersection = intersection->next;
            /* code */
        }
        return slow;
        /* code */
    }
}

void removeLoop(Node* head) {
    if (head == NULL)
    {
        Node* startOfLoop = getStartingNode(head);
        Node* temp  = startOfLoop ;
        
        while (temp -> next != startOfLoop)
        {
            temp = temp -> next ;
        }
        temp->next = NULL ;
        
    }
    
}
 void print(Node* &head ) {
    Node* temp = head ;

    while(temp != NULL) {
        cout << temp -> data << " " ;
        temp = temp -> next ;
    }
    cout << endl ;
 } 

int main()
{
    // Creating nodes and testing loop detection
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = head->next; // Creating a loop for testing

    if (detectLoop(head))
    {
        cout << " Loop detected. " << endl;
    }
    else
    {
        cout << " No loop detected. " << endl;
    }

    if (floydDetectLoop(head))
    {
        cout << "Loop detected." << endl;
    }
    else
    {
        cout << "No loop detected." << endl;
    }

    cout << " loop start at  getstarting Node :  " << getStartingNode(head)->data << endl;
     
     removeLoop(head);
     
    // Deleting nodes
    delete head;

    return 0;
}
// time coplexity = O(n)
//  space complexity = O(1)