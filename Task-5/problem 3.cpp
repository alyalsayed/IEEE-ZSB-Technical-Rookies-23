#include <bits/stdc++.h>
using namespace std;
int save_zarzor(int num) {
	int rem = 0, sum = 0;
	while (num > 0) {
		rem = num % 10;
		sum += (rem * rem);
		num /= 10;
	}
	return sum ;
}

int main() {
	int num;
	cin >> num;
	int res = num;
	//4 is random unlucky number
	while (res != 1 && res != 4) {
		res = save_zarzor(res);
	}
	if (res == 1)
		cout << "true";
	else if (res == 4)
		cout << "false";

	return 0;
}
