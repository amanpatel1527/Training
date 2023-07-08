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
    int max_capacity;
    int front; // front of the queue ,  this person leaves first
    int back;  // rear of the queue , this person leaves last
    int size;

    Queue()
    {
        this->front = 0;
        this->back = -1;
        this->max_capacity = 1000;
        this->size = 0;
    }

    void enqueue(int data)
    {
        if (size == max_capacity)
        {
            cout << "Maximum capacity reached" << endl;
            return;
        }
        back = (back + 1) % max_capacity;
        queue[back] = data;
        size++;
    }
    void deque()
    {
        if (size == 0)
        {
            cout << "Queue is empty now, Nothing to dequed" << endl;
        }
        cout << "The element to be dequeued is " << queue[front] << endl;
        front++;
        size--;
    }
    void peek()
    {
        cout << "The element at the front of the queue is " << queue[front] << endl;
    }
    void sizeofQueue()
    {
        cout << "The queue currently has " << size << " elements" << endl;
    }
};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);

    q.deque();
    q.sizeofQueue();
    q.peek();
    q.deque();
    q.sizeofQueue();
    q.peek();
    q.deque();
    q.sizeofQueue();
    q.peek();
    q.deque();
    q.sizeofQueue();
    q.peek();
    q.deque();
    q.sizeofQueue();
    q.peek();
    q.deque();
    q.sizeofQueue();
    q.peek();
    return 0;
}