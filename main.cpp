//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#include "MyStack.cpp"



int main() {
    //Main de test
    MyStack<int> *st=new MyStack<int>();
    for(int i=0;i<15;i++) st->push(i);
    //affichage des eleements
    while(st->top!=NULL){
        cout<<st->pop()<<"\t";

    }

}


