#include <iostream>

using namespace std;
int findDigits(int n) {

	int no_Div = 0;
	int temp = n;
	while (n > 0) {
		int d = n % 10; //for each digit
		n = n / 10;// move to next digitto left
		// if it is equal 0 ignore it 
		if (d == 0)
			continue;
		else if (temp % d == 0) {
			no_Div++;//increment if it is a divisor
		}
	}
	return no_Div;
}

int main() {
	int n, t;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << findDigits(n)<<endl;
	}
	return 0;
}
