#include "functions.h"



void permutation(int* p, int size) {
	for (int i = 0; i < size; i += 2)
	{
		if ((p[i] + p[i + 1]) % 2 != 0)
		{
			int buffer = p[i];
			p[i] = p[i + 1];
			p[i + 1] = buffer;

		}

	}


}

void printer_arr(int* p, int size) {

	for (int i = 0; i < size; i++)
	{
		cout << p[i] << '\t';
	}
	cout << endl;
}