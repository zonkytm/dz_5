#include "functions.h"



int main() {

	const int size = 12;
	int arr[size] = { 1,17,3,14,5,24,7,18,9,22,123,234 };
	int* p = arr;

	printer_arr(p, size);
	permutation(p, size);
	printer_arr(p, size);




	return 0;
}