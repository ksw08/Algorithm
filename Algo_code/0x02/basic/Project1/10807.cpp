#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, v, cnt = 0;
	vector<int> num(100);
	
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> num[i];
	}
	cin >> v;

	for (int i = 0;i < n;i++) {
		if (num[i] == v) cnt++;
	}

	cout << cnt;

	return 0;
}