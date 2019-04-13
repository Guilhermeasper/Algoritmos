

//
// Created by gasp on 12/04/2019.
//



#ifndef ALGO_LINK_H
#define ALGO_LINK_H
#include <string>
#include <utility>
using namespace std;
struct Link{
    string element;
    Link* next;
    Link(string e, Link* nextVal){
        element = move(e);
        next = nextVal;
    }

    explicit Link(Link* nextVal){
        next = nextVal;
    }
};
#endif //ALGO_LINK_H




