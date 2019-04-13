//
// Created by gasp on 12/04/2019.
//

#ifndef ALGO_STACK_H
#define ALGO_STACK_H
#include <iostream>
#include "link.h"
struct Stack{
Link* top;
int size;
Stack(){
    top = nullptr;
    size = 0;
}

void clear(){
    top = nullptr;
    size = 0;
}

void push(const string &element){
    top = new Link(element, top);
    size++;
}

string pop(){
    if(top == nullptr){
        cout << "Empty stack!";
        return "";
    }
    string element = top->element;
    top = top->next;
    size--;
    return element;
}

string topValue(){
    if(top == nullptr){
        cout << "Empty stack!";
        return "";
    }else{
        return top->element;
    }
}

int stackSize(){
    return size;
}

};
#endif //ALGO_STACK_H

