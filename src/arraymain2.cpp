#include "arrayStack.h"
using namespace std;

int main(int argc, char* argv[])
{
    arrayStack stack(4);
    int pop_dis;

    cout<<endl; 

    stack.display();
    cout<<endl;

    stack.push(5);
    stack.display();
    cout<<endl;

    stack.push(10);
    stack.display();
    
    cout<<endl;

    stack.push(15);
    stack.display();
    cout<<endl;

    stack.push(20);
    stack.display();
    cout<<endl;

    stack.push(25);
    stack.display();
    cout<<endl;
    
    pop_dis=stack.pop();
    stack.display();
    cout<<endl;
    
    
    pop_dis=stack.pop();
    stack.display();
    cout<<endl;
    
    pop_dis=stack.rtop();
    stack.display();
    cout<<endl;

    pop_dis=stack.pop();
    stack.display();
    cout<<endl;

    return 0;
}