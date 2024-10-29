#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        this->data = d;
        this->next = NULL;
    }
};

// Function to remove duplicates from an unsorted linked list
void removeDuplicates(Node* head) {
    Node* current = head;

    while (current != NULL && current->next != NULL) {
        Node* runner = current;
        
        // Check for duplicates of current node
        while (runner->next != NULL) {
            if (runner->next->data == current->data) {
                // Delete duplicate node
                Node* duplicate = runner->next;
                runner->next = runner->next->next;
                delete duplicate;
            } else {
                runner = runner->next;
            }
        }
        current = current->next;
    }
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(5);

    cout << "Original list: ";
    printList(head);

    // Remove duplicates
    removeDuplicates(head);

    cout << "List after removing duplicates: ";
    printList(head);

    // Clean up remaining nodes to avoid memory leaks
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
