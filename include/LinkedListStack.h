#ifndef LINKEDLISTSTACK_H
#define LINKEDLISTSTACK_H

#include"LinkedList.h"

using namespace std;

class LinkedListStack
{
    public:
    LinkedList list;
    node *top;
    public:
    LinkedListStack()
    {
        top=NULL;
    }
    bool isEmpty();
    void push(const int data);
    int pop();
    int rtop();
    void display();
};

#endif