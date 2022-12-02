#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	unordered_map<int, int> mp;
	// Count the frequency of element
	for (int i = 0; i < n; i++) {
		mp[arr[i]]++;
	}
	vector<int> res;
	priority_queue<pair<int, int>> pq;
	for (auto it : mp) {
		//first => freqency second => element
		pq.push( { it.second, it.first });
	}
	while (k--) {
		res.push_back(pq.top().second);
		pq.pop();
	}
	for(auto t:res)
	cout<<t<<" ";
}
