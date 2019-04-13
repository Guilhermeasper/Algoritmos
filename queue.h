//
// Created by gasp on 12/04/2019.
//

#ifndef ALGO_QUEUE_H
#define ALGO_QUEUE_H
#include <iostream>
#include "link.h"

struct Queue{
    Link* front;
    Link* back;
    int size;
    Queue(){
        front = back = new Link(nullptr);
        size = 0;
    }

    void clear(){
        front = back = new Link(nullptr);
        size = 0;
    }

    void enqueue(const string &element) {
        back->next = new Link(element, nullptr);
        back = back->next;
        size++;
    }

    string dequeue(){
        if(size == 0){
            cout << "Empty queue!";
            return "";
        }
        string element = front->next->element;
        front->next = front->next->next;
        if(front->next == nullptr) {
            back = front;
        }
        size--;
        return element;
    }

    string frontValue(){
        if(front == nullptr){
            cout << "Empty queue!";
            return "";
        }else{
            return front->element;
        }
    }

    string backValue(){
        if(front == nullptr){
            cout << "Empty queue!";
            return "";
        }else{
            return back->element;
        }
    }

    int queueSize(){
        return size;
    }

};

#endif //ALGO_QUEUE_H


