#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// count the occurrences of every number
	vector<int> counter(3, 0);
	for (int i = 0; i < n; i++) {
		counter[a[i] - 1]++;
	}
	// simply find the smallest sum produced by the frequency of two numbers
	int ans = INT_MAX;
	for (int i = 0; i < (int) counter.size(); i++) {
		ans = min(ans, counter[(i + 1) % 3] + counter[(i + 2) % 3]);
	}
	cout << ans << '\n';
	return 0;
}