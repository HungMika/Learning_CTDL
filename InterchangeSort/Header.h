#ifndef HEADER_H
#define HEADER_H
//các hàm khai báo
#include <iostream>
using namespace std;

template <class DataType>
void Input(DataType array[], int& n) {
	cout << "nhap vao so luong phan tu:\n";
	cin >> n;
	cout << "nhap vao day so:\n";
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
}

template <class DataType>
void InterchangeSort(DataType array[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (array[j] < array[i]) { swap(array[i], array[j]); }
		}
	}
}

template <class DataType>
void PrintArray(DataType array[], int n) {
	for (int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}
//kết thúc
#endif

