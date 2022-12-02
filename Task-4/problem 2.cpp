// C++ program to check whether two strings are
// Permutations of each other
#include <bits/stdc++.h>
using namespace std;
bool is_permutation(string str1, string str2) {

	int arr[26] = { 0 }, j = 0, i = 0, count = str1.size();

	for (char a : str1) {
		arr[a - 'a']++;
	}

	while (j < str2.size()) {
		if (arr[str2.at(j++) - 'a']-- > 0) {
			count--;
		}
		if (count == 0) {
			return true;
		}
		if (j - i == str1.size() && arr[str2.at(i++) - 'a']++ >= 0) {
			count++;
		}
	}
	return false;
}

int main() {
	string str1 = "", str2 = "";
	cin >> str1 >> str2;
	if (is_permutation(str1, str2))
		printf("true");
	else
		printf("false");

	return 0;
}
