#include <iostream>
using namespace std;
const int MAX_SIZE = 100;

template <class DataType>
void shift(DataType a[], int left, int right) {
	
	DataType x;
	int curr, joint;
	curr = left;
	joint = 2 * curr + 1;
	x = a[curr];

	while (joint <= right)
	{
		if (joint < right)
		{
			if (a[joint] < a[joint + 1])
			{
				joint += 1;
			}
		}
		if (a[joint] < x) { break; }

		a[curr] = a[joint];
		curr = joint;
		joint = 2 * curr + 1;
	}
	a[curr] = x;
}

template <class DataType>
void createHeap(DataType a[], int n) {
	int left;
	//left là vị trí phần tử cần ghép thêm
	for (left = (n - 1)/2; left > 0; left--)
	{
		shift(a, left, n - 1);
	}
}

template <class DataType>
void heapSort(DataType a[], int n) {
	int right;
	createHeap(a, n);
	right = n - 1;
	while (right > 0)
	{
		swap(a[0], a[right]);
		right--;
		shift(a, 0, right);
	}
}

template <class DataType>
void Input(DataType a[], int &n) {
	cout << "nhap vao so luong phan tu:" << endl;
	cin >> n;
	cout << "nhap vao phan tu:\n";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

template <class DataType>
void PrintArray(DataType a[], int n) {
	cout << "mang sau khi sap xep:\n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

int main() {
	float a[MAX_SIZE];
	int n;

	Input(a, n);
	heapSort(a, n);
	PrintArray(a, n);

	return 0;
}