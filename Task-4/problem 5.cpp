#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b) {
   
    int temp=a;
    a=b;
    b=temp;
}

int main() {
	//test program
	int n;
	cin >> n;
	int matrix[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	//get transpose of the matrix
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			swap(matrix[i][j], matrix[j][i]);
		}
	}
	for (int k = 0; k < n; k++) {
		//logic to reverse each row.
		int left = 0, right = n - 1;
		while (left < right) {
			swap(matrix[k][left], matrix[k][right]);
			left++;
			right--;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << matrix[i][j] << " ";
		cout << '\n';
	}
	return 0;
}
