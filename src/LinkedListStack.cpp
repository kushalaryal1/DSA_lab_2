#include "LinkedListStack.h"
#include "LinkedList.h"
using namespace std;

bool LinkedListStack::isEmpty() 
{
    //if(list.isEmpty())
    //return 1;
    //else
    //return 0;
    //list.isEmpty();
    if(list.isEmpty())
    {
        cout<<"Stack is empty."<<endl;
        cout<<endl;
    }
    else
    {
        cout<<"Stack isn't empty."<<endl;
        cout<<endl;
    }
}

void LinkedListStack::push(const int data)
{
    list.addToHead(data);
    top=list.returnHead();
}

int LinkedListStack::pop()
{
    if(top==NULL)
    {
        cout<<"Cannot pop. The stack is Empty."<<endl;
        return 0;
    }
    else
    {
        int temp=top->info;
        top=top->next;
        list.removeFromHead();
        cout<<temp<<" has been popped"<<endl;
        return temp;
    }
}

int LinkedListStack::rtop()
{
    if(top==NULL)
    {
        cout<<"Cannot return top.The stack is empty."<<endl;
        return 0;
    }
    else
    {
        int r_top= top->info;        
        cout<<r_top<<" is on the top of the stack"<<endl;
        cout<<endl;
        return r_top;
    }
}

void LinkedListStack::display()
{
    /*
    if(list.isEmpty())
    cout<<"Stack is empty"<<endl;
    else
    cout<<"Stack isn't empty."<<endl;
    */

    if(top==NULL)
    cout<<"Stack is empty."<<endl;
    else
    list.traverse();
    cout<<endl;
}