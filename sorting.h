//
// Created by gasp on 12/04/2019.
//

#ifndef ALGO_SORTING_H
#define ALGO_SORTING_H

#include <string>
using namespace std;

int lomutoPartition(int a[], int inicio, int fim) {
    int p = a[inicio];
    int s = inicio;
    for (int i = inicio + 1; i <= fim; i++) {
        if (a[i] < p) {
            s++;
            int aux = a[s];
            a[s] = a[i];
            a[i] = aux;
        }
    }
    int aux = a[inicio];
    a[inicio] = a[s];
    a[s] = aux;
    return s;
}

int lomutoPartition(string a[], int inicio, int fim) {
    string p = a[inicio];
    int s = inicio;
    for (int i = inicio + 1; i <= fim; i++) {
        if (a[i] < p) {
            s++;
            string aux = a[s];
            a[s] = a[i];
            a[i] = aux;
        }
    }
    string aux = a[inicio];
    a[inicio] = a[s];
    a[s] = aux;
    return s;
}

void quicksort(int a[], int begin, int end) {
    if (begin < end) {
        int s = lomutoPartition(a, begin, end);
        quicksort(a, begin, s - 1);
        quicksort(a, s + 1, end);
    }
}

void quicksort(string a[], int begin, int end) {
    if (begin < end) {
        int s = lomutoPartition(a, begin, end);
        quicksort(a, begin, s - 1);
        quicksort(a, s + 1, end);
    }
}
#endif //ALGO_SORTING_H
