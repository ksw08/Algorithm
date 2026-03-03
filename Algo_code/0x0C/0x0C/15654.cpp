#include <bits/stdc++.h>
using namespace std;
int n, m;
int arr[64];
int res[64];
int isused[64];

void cal(int cur) {
	if (cur == m) {
		for (int i = 0;i < m;i++) {
			cout << res[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 0;i < n;i++) {
		if (isused[i] == false) {
			res[cur] = arr[i];
			isused[i] = true;
			cal(cur + 1);
			isused[i] = false;
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