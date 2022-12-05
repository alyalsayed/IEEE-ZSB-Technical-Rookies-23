#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[], int n, int i) {
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	int max = i;
	if (left < n && arr[left] > arr[max])
		max = left;
	if (right < n && arr[right] > arr[max])
		max = right;

	if (max != i) {
		swap(arr[i], arr[max]);
		heapify(arr, n, max);
	}
}

void max_heap(int arr[], int n) {
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);
}

void print_array(int arr[], int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	max_heap(arr, n);
	print_array(arr, n);

	return 0;
}
