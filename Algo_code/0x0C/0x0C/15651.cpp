#include <bits/stdc++.h>
using namespace std;
int n, m;
int arr[10];

void cal(int cur) {
	if (cur == m) {
		for (int i = 0;i < m;i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 0;i < n;i++) {
		arr[cur] = i + 1;
		cal(cur + 1);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	cal(0);

}