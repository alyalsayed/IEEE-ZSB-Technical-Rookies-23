#include<bits/stdc++.h>
using namespace std;

int min_dis(int arr[], int n) {
	map<int, int> dic;

	int mn = INT_MAX;

	int prev_in = 0, curr_in = 0;

	for (int i = 0; i < n; i++) {

		if (dic.find(arr[i]) != dic.end()) {
			curr_in = i;
			prev_in = dic[arr[i]];
			mn = min((curr_in - prev_in), mn);
		}

		// Update the map.
		dic[arr[i]] = i;
	}

	return (mn == INT_MAX ? -1 : mn);
}
int main() {
	int arr[] = { 2, 5, 3, 4, 5, 2 };
	cout << min_dis(arr, 6);
}

