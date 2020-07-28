#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n;
	cin >> n;
	char a[n];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int cnt = 0;
	for(int i = 0; i < n; ++i) {
		if(a[i] == '8') {
			break;
		}
		else cnt++;
	}
	if(n - cnt >= 11) cout << "YES";
	else cout << "NO";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
