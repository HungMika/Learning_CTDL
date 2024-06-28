//Cho 1 dãy số nhập từ bàn phím, sắp xếp theo thứ tự Interchange sort (đổi chỗ trực tiếp)
#include "Header.h"
//có thể khai báo các hàm bên Header.h ở đây
int main() {
	const int MAX_SIZE = 100;
	int n;

	float array[MAX_SIZE];
	Input(array, n);

	InterchangeSort(array, n);

	cout << "Mang sau khi sap xep:\n";
	PrintArray(array, n);

	return 0;
}