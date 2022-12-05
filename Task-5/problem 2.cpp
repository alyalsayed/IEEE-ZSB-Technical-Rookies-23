#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool are_pairs(char open, char close) {
	if (open == '(' && close == ')')
		return true;
	else if (open == '{' && close == '}')
		return true;
	else if (open == '[' && close == ']')
		return true;
	return false;
}
bool solve(string text) {
	stack<char> stk;
	int length = text.length();
	for (int i = 0; i < length; i++) {
		if (text[i] == '(' || text[i] == '{' || text[i] == '[')
			stk.push(text[i]); //if there are open Parentheses push it
		//if there are closed Parentheses
		//and top and and current Parentheses are not pairs
		//or stack is empty so no matching for current Parentheses
		else if (text[i] == ')' || text[i] == '}' || text[i] == ']') {
			if (stk.empty() || !are_pairs(stk.top(), text[i]))
				return false;
			else
				stk.pop();		//so there is matching then pop
		}
	}
	if (stk.empty())
		return true;
	else
		return false;

}

int main() {

	string text = "";
	cin >> text;
	if (solve(text))
		cout << "true";
	else
		cout << "false";

	return 0;
}
