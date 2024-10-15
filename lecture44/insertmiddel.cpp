#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAthead(Node *&head, int d)
{
    // New node creation
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void inserAttail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}
//  traverse insertion sort
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    // Insert at start
    if (position == 1)
    {
        insertAthead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    // Traverse to the position before the insertion point
    while (cnt < position - 1 && temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }

    // Inserting at last position
    if (temp == NULL || temp->next == NULL)
    {
        inserAttail(tail, d);
        return;
    }

    // Creating a node for insertion
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

int main()
{
    Node *node1 = new Node(10);

    // Head and tail pointed to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);

    inserAttail(tail, 12);
    print(head);

    inserAttail(tail, 15);
    print(head);

    insertAtPosition(head, tail, 1, 20);  // Inserting at position 1
    print(head);

    return 0;
}
