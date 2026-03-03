#include <bits/stdc++.h>
using namespace std;
int n, m;
int arr[10];
int res[10];

void cal(int cur) {
	if (cur == m) {
		for (int i = 0;i < m;i++) {
			cout << res[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 0;i < n;i++) {
		if (cur == 0) {
			res[cur] = arr[i];
			cal(cur + 1);
			continue;
		}
		if (res[cur-1] < arr[i]) {
			res[cur] = arr[i];
			cal(cur + 1);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0;i < n;i++) cin >> arr[i];
	sort(arr, arr + n);
	cal(0);
}