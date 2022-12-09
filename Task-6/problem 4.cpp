#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, count = 0, max_topic = 0, tmp = 0;
	cin >> n >> m;
	string str[1200]; //array of strings
	for (int i = 0; i < n; i++)
		cin >> str[i];
	//we need 3 for loops
	//1st loop to get each raw
	//2nd loop to get another raw to do OR operations between them
	// 3rd loop to iterate through each raw
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			tmp = 0;
			for (int k = 0; k < m; k++)
				if (str[i][k] == '1' || str[j][k] == '1')
					tmp++;

			if (tmp == max_topic) {
				count++;
				continue;
			}
			if (tmp > max_topic) {
				max_topic = tmp;
				count = 1;
			}
		}
	}

	cout << max_topic << endl << count << endl;
	return 0;
}
