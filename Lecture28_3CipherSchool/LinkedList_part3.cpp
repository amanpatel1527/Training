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
void printLinkedList(node *&head){

};
int main()
{
    node *node1 = new node(3);
    node *node2 = new node(5);
    node *node3 = new node(7);

    // printnode(node1);
    // printnode(node2);
    // printnode(node3);

    node1->next = node2;
    node2->next = node3;

    // printnode(node1);
    // cout << endl;
    // printnode(node2);
    // cout << endl;
    // printnode(node3);

    printnode(node1->next);       // node2 = node1->next;
    printnode(node1->next->next); // node3 = node2->next = node1->next->next

    return 0;
}