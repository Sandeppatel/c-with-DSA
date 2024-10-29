#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
bool uniqueSortedList(Node *head)
{
    if (head == NULL)
    {
        return true;
    }
    vector<int> arr ;
    Node* temp =  head ;

    while (temp != NULL)
    {
       arr.push_back(temp->data);
       temp = temp->next;
    }
    for (int  i = 1; i < arr.size(); i++)
    {
        if (arr[i] <= arr[i-1])
        {
           return false ;
        }  
    }
    return true ;
}

int main()
{
    Node* head  = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
      if(uniqueSortedList(head)){
        cout << " the list is uniqe and sorted  " << endl ;
      }
      else{
        cout << " its is not uniqe and sorted " << endl ;
      }
      delete head ;
    return 0;
}