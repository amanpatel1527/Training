#include <iostream>
#include <stack>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data_input)
    {
        this->data = data_input;
        this->next = NULL;
    }
};
void printnode(node *&node)
{
    cout << "Value " << node->data << "  ";
    cout << "Address " << node->next << endl;
}
void printLinkedList(node *&head)
{
    if (head == NULL)
    {
        cout << "The linkedlist is still empty " << endl;
        return;
    }
    node *temp;
    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "-->";
        temp = temp->next;
    }
};
int main()
{

    // Head of linked list iis nothing but a fancy term to indicate the top or the first node
    node *head =NULL;

    printLinkedList(head);

    node *node1 = new node(3);
    head = node1;
    printLinkedList(head);
    cout << endl;

    node *node2 = new node(5);
    node1->next = node2;
    printLinkedList(head);
    cout << endl;

    node *node3 = new node(7);
    node2->next = node3;
    printLinkedList(head);
    cout << endl;

    node *node4 = new node(9);
    node3->next = node4;
    printLinkedList(head);
    cout<<endl;

    // printnode(node1);
    // printnode(node2);
    // printnode(node3);

    // printnode(node1);
    // cout << endl;
    // printnode(node2);
    // cout << endl;
    // printnode(node3);

    // printnode(node1->next);       // node2 = node1->next;
    // printnode(node1->next->next); // node3 = node2->next = node1->next->next

    return 0;
}