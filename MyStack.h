//
// Created by farid on 19/12/22.
//

#ifndef LINKEDLISTSTACK_MYSTACK_H
#define LINKEDLISTSTACK_MYSTACK_H
#include <bits/stdc++.h>

template<class T>
struct StackNode {
    T data;
    StackNode *next;
    StackNode(T a) {
        data = a;
        next = NULL;
    }
};
template<class T>
class MyStack {
public:
    StackNode<T> *top;

public:
    void push(T);
    int pop();
    MyStack() { top = NULL; }
};

#endif //LINKEDLISTSTACK_MYSTACK_H
