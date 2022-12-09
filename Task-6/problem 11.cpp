#include <bits/stdc++.h>
using namespace std;
const int max_sec_in_day = 86400;
int main() {
	//n number of days
	//t time required
	int n, t, total;
	cin >> n >> t;
	int arr[n];
	while (true) {
		total = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];	//array of seconds during work
			total += (max_sec_in_day - arr[i]);
			//when she exceeds time required to read the book
			if (total >= t) {
				cout << i + 1 << endl;
				return 0;	//end program
			}
		}
	}
}
