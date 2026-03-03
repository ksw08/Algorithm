#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c;
	long long result = 0;
	vector<int> count(10);

	cin >> a >> b >> c;
	result = a * b * c;

	while (result > 0) {
		count[result % 10]++;
		result /= 10;
	}

	for (int i = 0;i < 10;i++) {
		cout << count[i] << "\n";
	}

	return 0;
}