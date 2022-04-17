//circular Queue
#include <iostream>
using namespace std;
class Queue
{
public:
    int *arr;
    int rear;
    int front;
    int size;
    void create(int s)
    {
        size = s;
        arr = new int[s];
        front = rear = -1;
    }
    int isFull()
    {
        if ((rear + 1) % size == front)
        {
            cout << "Stack is full";
        }
        return 0;
    }
    int isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Stack is empty" << endl;
        }
        return 0;
    }
    void enQueue(int value)
    {
        cout << "Pushing the value : " << value << endl;
        if (isFull())
            cout << "Can not push " << value << ", The Circular Queue is Full." << endl;

        else 
        if (front =  -1 ) front = 0;
        rear = (rear + 1) % size;
        arr[rear] = value;
    }
    int deQueue()
    {
        int element;
        if (isEmpty())
        {
            cout << "The Circular Queue is empty." << endl;
            return -1;
        }
        element = arr[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }

        else
        {
            front = (front + 1) % size;
        }
        cout << "Popping out the value : " << element << endl;
        return element;
    }
    void display()
    {
        int i;
        if (isEmpty())
            cout << "The Circular Queue is empty." << endl;
        else
        {
            cout << "The Circular Queue is :" << endl;
            for (i = front; i != rear; i = (i + 1) % size)
                cout << arr[i] << " ";
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Queue q;
    q.create(5);
    q.enQueue(12);
    q.enQueue(23);
    q.enQueue(45);
    q.enQueue(13);
    q.enQueue(49);
    q.display();
    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.display();
    q.enQueue(98);

    return 0;
}