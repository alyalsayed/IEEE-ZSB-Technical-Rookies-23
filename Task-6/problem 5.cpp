// subsequence
#include <bits/stdc++.h>

using namespace std;
string hackerrankInString(string sub, string word) {
	int j = 0;
	for (int i = 0; i < word.length(); i++) {
		if (sub[j] == word[i])
			j++;
	}

	return j == sub.length() ? "YES" : "NO";
}

int main() {
	int t;
	cin >> t;
	string word = "";
	while (t--) {
		cin >> word;
		cout << hackerrankInString("hackerrank", word) << endl;
	}
}

