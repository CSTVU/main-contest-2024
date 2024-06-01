#include <bits/stdc++.h>
using namespace std;

int main() {
	long n;
	cin >> n;
	long int ans = -1;
	for (int i = 0; i < n; i++) {
		long int number;
		cin >> number;
		ans = max(number, ans);
	}
	cout << ans;
	return 0;
}
