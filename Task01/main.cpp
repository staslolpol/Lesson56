#include "logic.h"

int main() {
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE];
	int n, m;

	cout << "Input square of matrix(n, m): ";
	cin >> n >> m;

	init(matrix, n, m, 0, 10);

	cout << "Matrix: " << endl << convert(matrix, n, n) << endl;

	int sum = sum_main_elements(matrix, n);
	cout << "Sum of main diagonal elements if: " << sum << endl;

	sum = sum_addition_elements(matrix, n);
	cout << "Sum of addition diagonal elements if: " << sum << endl;

	sum = sum_in_matrix_elements(matrix, n);
	cout << "Sum of in matrix elements if: " << sum << endl;

	

	return 0;
}