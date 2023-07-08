#include <iostream>
using namespace std;

class Queue
{
    // Length of the queue
    // starting of the queue
    // Is the queue is full or empty
    // adding new elements to the queue
    // membering  leaving the queue

    // Implemented both  using array and Linked List
public:
int queue[1000];
    int capacity;
    int front; // front of the queue ,  this person leaves first
    int back;  // rear of the queue , this person leaves last

    Queue()
    {
        this->front = 0;
        this->back = -1;
        this->capacity = 1000
    }
};

int main()
{

    return 0;
}