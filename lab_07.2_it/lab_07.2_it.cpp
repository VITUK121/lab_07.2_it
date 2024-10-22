#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;

int** make_arr(int rows, int cols, int low, int high) {
	int** arr = new int* [rows];
	for (int i = 0; i != rows; i++){
		arr[i] = new int[cols];
	}
	for (int i = 0; i != rows; i++) {
		for (int j = 0; j != cols; j++) {
			arr[i][j] = low + rand() % (high - low + 1);
		}
	}
	return arr;
}

void print_arr(int** arr, int rows, int cols) {
	for(int i = 0; i != rows; i++) {
		for (int j = 0; j != cols; j++) {
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

int max_on_1st_diag(int** arr, int n) {
	int _max = arr[0][0];
	for (int i = 1; i != n; i++) {
		if (_max < arr[i][i]) {
			_max = arr[i][i];
		}
	}
	return _max;
}

int main(){
	srand(time(NULL));

	int n;
	cout << "n = "; cin >> n;

	int** arr = make_arr(n, n, -10, 10);
	print_arr(arr, n, n);
	cout << max_on_1st_diag(arr, n) << endl;
}