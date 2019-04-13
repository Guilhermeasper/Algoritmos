#include <iostream>
#include "stack.h"
#include "queue.h"
#include "sorting.h"
#include <string.h>
using namespace std;


int main() {
    string test[] = {"Teste 1","Teste 2","Teste 3","Teste 4","Teste 5","Teste 6","Teste 7","Teste 8","Teste 9","Teste 10"};
    int integerTest[] = {10,9,8,7,6,5,4,3,2,1};

    cout << "Testing Stack" << endl;
    auto *stackTest = new Stack();
    cout << "Inserting 10 elements on the Stack" << endl;
    for (const auto &i : test) {
        stackTest->push(i);
        cout << "Element: " << i << " inserted on the stack" << endl;
    }
    cout << "The Stack has " << stackTest->size << " elements" << endl;
    cout << endl << "Poping elements on the Stack" << endl;
    for(int i = 0; i < 10; i++){
        cout << "Removing element: " << stackTest->pop() << " from the stack" << endl;
    }


    cout << endl << "Testing Queue" << endl;
    auto *queueTest = new Queue();
    cout << "Inserting 10 elements on the Queue" << endl;
    for (const auto &i : test) {
        queueTest->enqueue(i);
        cout << "Element: " << i << " inserted on the queue" << endl;
    }
    cout << "The Queue has " << queueTest->size << " elements" << endl;
    cout << endl << "Dequeuing elements on the Queue" << endl;
    for(int i = 0; i < 10; i++){
        cout << "Dequeuing element: " << queueTest->dequeue() << " from the queue" << endl;
    }

    cout << endl << "Testing Quicksort" << endl;
    cout << "Untidy array of integers" << endl;
    for (int i : integerTest) {
        cout << i << " ";
    }
    cout << endl << "Apply Quicksort in the array" << endl;
    quicksort(integerTest, 0, 9);
    cout << "Ordered array of integers" << endl;
    for (int i : integerTest) {
        cout << i << " ";
    }

    
    return 0;
}