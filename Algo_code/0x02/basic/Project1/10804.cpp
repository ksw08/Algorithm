#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int> num(20);
	int a, b, temp = 0;

	for (int i = 0;i < 20;i++) {
		num[i] = i + 1;
	}

	for (int i = 0;i < 10;i++) {
		cin >> a >> b;
		for (int j = 0;j < (b-a+1) / 2;j++) {
			temp = num[a - 1 + j];
			num[a - 1 + j] = num[b - 1 - j];
			num[b - 1 - j] = temp;
		}
	}

	for (int i = 0;i < 20;i++) cout << num[i] << " ";

	return 0;
}