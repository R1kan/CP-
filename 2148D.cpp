#include<bits/stdc++.h>

using namespace std;

using ll = long long;
void solve() {
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	ll sum = 0;
	vector<ll> odd, even;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			even.push_back(a[i]);
		}
		else {
			odd.push_back(a[i]);
		}
	}
	int m = odd.size();
	if (odd.size() == 0) {
		sum = 0;
	}
	else {
		for (int i = 0; i < even.size(); i++) {
			sum += even[i];
		}
		for (int i = m - 1; i >= m / 2; i--) {
			sum += odd[i];
		}
	}
	cout << sum << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
