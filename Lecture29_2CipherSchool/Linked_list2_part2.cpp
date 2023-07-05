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

void insertAtStart(node *&head, int data)
{
    node *temp = new node(data);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    temp->next = head;
    head = temp;
}

void insertAtEnd(node *&head, int data)
{
    node *temp = new node(data);

    if (head == NULL)
    {
        head = temp;
        return;
    }

    node *end;
    end = head;

    while (end->next != NULL)
    {
        end = end->next;
    }
    end->next = temp;
}

void insertAtMiddle(node *&head, int data, int pos)
{

    node *temp = new node(data);
    node *var = head;

    while(var->data!=pos)
    {
        var = var->next;
        if(var==NULL)
        {
            cout<<"The location is not exist"<<endl;
            return;
        }
    }


    while (var->data != pos)
    {
        var = var->next;
    }
    temp->next = var->next;
    var->next = temp;
}
int main()
{

    // Head of linked list iis nothing but a fancy term to indicate the top or the first node
    node *head = NULL;

    printLinkedList(head);

    node *node1 = new node(4);
    head = node1;
    // printLinkedList(head);
    // cout << endl;

    node *node2 = new node(5);
    node1->next = node2;
    // printLinkedList(head);
    // cout << endl;

    node *node3 = new node(7);
    node2->next = node3;
    // printLinkedList(head);
    // cout << endl;

    node *node4 = new node(8);
    node3->next = node4;
    printLinkedList(head);
    cout << endl;

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

    // Inserting new elements to the linked list
    cout << "inserting 3 new element at start" << endl;
    insertAtStart(head, 3);
    insertAtStart(head, 2);
    insertAtStart(head, 1);
    printLinkedList(head);
    cout << endl;

    // Adding element to linked list at end of list
    cout << "Inserting elements at the end now" << endl;
    insertAtEnd(head, 9);
    insertAtEnd(head, 10);
    printLinkedList(head);

    // Inserting an element at the middle of list

    cout << "Inserting elements in the middle " << endl;
    insertAtMiddle(head, 6,5);
    printLinkedList(head);
    cout<<endl;
    insertAtMiddle(head, 6,44);
    printLinkedList(head);
    return 0;
}