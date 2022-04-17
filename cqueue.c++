#include <iostream>
using namespace std;
class Node
{
private:
    int data;
    Node *next;

public:
    Node *front = NULL;
    Node *rear = NULL;
    void enQueue(int val)
    {
        Node *ptr = new Node();
        ptr->data = val;
        ptr->next = NULL;
        if (front == NULL)
        {
            // if first node inserted
            front = ptr;
            rear = ptr;
        }
        else
        {
            rear->next = ptr;
            rear = ptr;
        }
    }
    void deQueue()
    {
        Node *p = front;
        front = front->next;
        free(p);
    }
    void display()
    {
        Node *ptr;
        ptr = front;
        cout << "Value in stack is: ";
        do
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        } while (ptr != rear->next);

        cout << endl;
        cout << endl;
    }
};

int main()
{
    Node nd;
    nd.enQueue(12);
    nd.enQueue(34);
    nd.enQueue(65);
    nd.display();
    return 0;
}