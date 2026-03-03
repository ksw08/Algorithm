#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int sum = 0, average = 0;
	vector<int> x(5);

	for (int i = 0;i < 5;i++) {
		cin >> x[i];
		sum += x[i];
	}
	sort(x.begin(), x.end());
	average = sum / 5;
	cout << average << "\n" << x[2];


	return 0;
}