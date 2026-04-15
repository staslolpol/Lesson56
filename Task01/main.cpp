#include "util.h"

int main() {
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE];
	int n, m;

	cout << "Input size of matrix(n, m): ";
	cin >> n >> m;

	init(matrix, n, m, 0, 10);

	cout << "Matrix: " << endl << convert(matrix, n, m) << endl;

	return 0;
}