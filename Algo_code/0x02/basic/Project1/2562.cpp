#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> num(9);
	vector<int> copy(9);

	for (int i = 0; i < 9;i++) {
		cin >> num[i];
	}
	copy = num;
	sort(num.begin(), num.end());

	for (int i = 0;i < 9;i++) {
		if (copy[i] == num[8]) {
			cout << num[8] << "\n" << i + 1;
			break;
		}
	}

	return 0;
}