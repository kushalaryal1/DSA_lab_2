#include "arrayStack.h"
using namespace std;

bool arrayStack::isEmpty() const
{
    return top==-1;
}

bool arrayStack::isFull() const
{
    return top==maxSize-1;
}

void arrayStack::push(const int data) 
{
    if(isFull())
    cout<<"Cannot push data. The stack is full."<<endl;
    else
    {
        arr[++top]=data;
        cout<<data<<" has been pushed"<<endl;
    }
}

int arrayStack::pop()
{
    if(isEmpty())
    {
    cout<<"Cannot pop data. The stack is empty."<<endl;
    return 0;
    }
    else
    {
        int data=arr[top--];        
        cout<<data<<" has been popped"<<endl;
        return data;
    }
}

int arrayStack::rtop() const
{
    if(isEmpty())
    return 0;
    else
    {
        int r_top=arr[top];
        cout<<r_top<<" is on the top of the stack"<<endl;
        return r_top;
    }
}

void arrayStack::display()
{
    if(isEmpty())
    cout<<"Cannot display data. The stack is empty"<<endl;
    else
    {
        int i;
        for(i=top;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}