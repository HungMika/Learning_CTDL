#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_SIZE = 100;
float b[MAX_SIZE], c[MAX_SIZE];

template <class DataType>
void distribute(DataType a[], int n, int& nb, int& nc, int k) {
    int i, pa, pb, pc;
    pa = pb = pc = 0;
    while (pa < n) {
        for (i = 0; (pa < n) && (i < k); i++, pa++, pb++) {
            b[pb] = a[pa];
        }
        for (i = 0; (pa < n) && (i < k); i++, pa++, pc++) {
            c[pc] = a[pa];
        }
    }
    nb = pb;
    nc = pc;
}

template <class DataType>
void MergeSubarr(DataType a[], int nb, int nc, int& pa, int& pb, int& pc, int k) {
    int rb, rc;
    rb = min(nb, pb + k);
    rc = min(nc, pc + k);
    while ((pb < rb) && (pc < rc)) {
        if (b[pb] < c[pc]) {
            a[pa++] = b[pb++];
        }
        else {
            a[pa++] = c[pc++];
        }
    }
    while (pb < rb) {
        a[pa++] = b[pb++];
    }
    while (pc < rc) {
        a[pa++] = c[pc++];
    }
}

template <class DataType>
void merge(DataType a[], int nb, int nc, int k) {
    int pa, pb, pc;
    pa = pb = pc = 0;
    while ((pb < nb) && (pc < nc)) {
        MergeSubarr(a, nb, nc, pa, pb, pc, k);
    }
    while (pb < nb) {
        a[pa++] = b[pb++];
    }
    while (pc < nc) {
        a[pa++] = c[pc++];
    }
}

template <class DataType>
void mergeSort(DataType a[], int n) {
    int k, nb, nc;
    for (k = 1; k < n; k *= 2) {
        distribute(a, n, nb, nc, k);
        merge(a, nb, nc, k);
    }
}

template <class DataType>
void Input(DataType a[], int& n) {
    cout << "nhap vao so luong phan tu:\n";
    cin >> n;
    cout << "nhap vao day so:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

template <class DataType>
void PrintArray(DataType a[], int n) {
    cout << "mang sau khi sap xep:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

#endif // !HEADER_H

