#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};
Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
};

Node *add(Node *first, Node *second)
{
    Node *dummy = new Node(0);
    Node *current = dummy;
    int carry = 0;

    while (first != NULL || second != NULL || carry != 0)
    {
        int sum = carry;
        if (first != NULL)
        {
            sum += first->data;
            first = first->next;
        }

        if (second != NULL)
        {
            sum += second->data;
            second = second->next;
        }

        carry = sum / 10;
        current->next = new Node(sum % 10);
        current = current->next;
    }
    return dummy->next;
}
Node *addTwoLists(Node *first, Node *second)
{
    // step 1: reverse input Linked Lists
    first = reverse(first);
    second = reverse(second);

    //  step 2 : add the two reversed liked lists
    Node *result = add(first, second);

    // step 3 : reverse the result to get the final answer
    return reverse(result);
}
void printList(Node *head)
{

    while (head != NULL)
    {
        cout << head->data << ' ';
        head = head->next;
    }
    cout << endl;
}
int main()
{
    //  create first linked list  2->4->3:
    Node *first = new Node(2);
    first->next = new Node(4);
    first->next->next = new Node(3);

    //     create a second linked list  5->6->4 :
    Node *second = new Node(5);
    second->next = new Node(6);
    second->next->next = new Node(4);

    Node *result = addTwoLists(first, second);
    cout << " resultant list ";

    printList(result);
    return 0;
}
