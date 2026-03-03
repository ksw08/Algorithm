#include <bits/stdc++.h>
using namespace std;
int n, m;
int arr[64];

void cal(int cur, int ini) {
	if (cur == m) {
		for (int i = 0;i < m;i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = ini;i <= n;i++) {
		arr[cur] = i;
		cal(cur + 1,arr[cur]);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	cal(0,1);

}