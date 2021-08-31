#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
void printReverse(Node* head)
{
    if (head == NULL)
    return;
    printReverse(head->next);
    cout << head->data << " ";
}
void insert(Node** head_ref, char new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
int main()
{
    Node* head = NULL;
    insert(&head, 4);
    insert(&head, 3);
    insert(&head, 2);
    insert(&head, 1);
     
    printReverse(head);
    return 0;
}