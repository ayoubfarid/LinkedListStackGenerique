//
// Created by farid on 19/12/22.
//

#include "MyStack.h"
//Function to push an element to the stack
template<class T>
void MyStack<T>::push(T x)
{
    StackNode<T> *st=new StackNode(x);
    st->next=top;
    top=st;

}

//Function to remove an item from top of the stack.
template<class T>
int MyStack<T> ::pop()
{
    int t=top->data;
    top=top->next;
    return t;
    // Your Code
}