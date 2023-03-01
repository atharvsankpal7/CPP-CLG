#include <iostream>
using namespace std;
template <class T>
class Stack
{
    T stack[1000];
    int tos = -1;

public:
    void push(T data)
    {
        if (tos >= 1000 - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        stack[++tos] = data;
    }
    void pop()
    {
        if (tos == -1)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        cout << stack[tos--] << " has been popped\n";
    }
    void TOS()
    {
        cout << "The Top of Stack is --> " << stack[tos] << endl;
    }
};
template <class T>
class Queue
{
    T queue[1000];
    int front = -1, rear = -1;

public:
    void enqueue()
    {
        if (front > rear)
            front = -1, rear = -1;
        if (front == -1)
            front++;
        cout << "Enter the element that you want to insert -->";
        cin >> queue[++rear];
    }
    void dequeue()
    {
        front > rear ? cout << "Queue Underflow!!\n" : cout << queue[front++] << " has been dequeued\n";
        ;
    }
    void traverse()
    {
        cout << "The queue is -->" << endl;
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Stack<char> char_stack;
    Stack<float> float_stack;
    Stack<int> int_stack;

    Queue<int> queue_int;
    queue_int.enqueue();
    queue_int.enqueue();
    queue_int.enqueue();
    queue_int.enqueue();
    queue_int.traverse();
    queue_int.dequeue();
    queue_int.dequeue();
    queue_int.dequeue();
    queue_int.dequeue();
    queue_int.dequeue();
    queue_int.dequeue();
    queue_int.dequeue();
    queue_int.dequeue();
    queue_int.dequeue();
    queue_int.dequeue();
    queue_int.dequeue();
    queue_int.dequeue();
    queue_int.dequeue();
    queue_int.dequeue();
    queue_int.enqueue();
    queue_int.enqueue();
    queue_int.enqueue();
    queue_int.enqueue();
    queue_int.enqueue();
    queue_int.traverse();
    return 0;
}