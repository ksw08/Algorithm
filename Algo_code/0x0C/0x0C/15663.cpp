#include <bits/stdc++.h>
using namespace std;
int num[10];
int res[10];
int isused[10];
int n, m;

void cal(int cur) {
	if (cur == m) {
		for (int i = 0;i < m;i++) {
			cout << res[i] << ' ';
		}
		cout << '\n';
		return;
	}
	int tmp = 0;
	for (int i = 0;i < n;i++) {
		if (isused[i] == false && tmp != num[i]) {
			res[cur] = num[i];
			isused[i] = true;
			tmp = num[i];
			cal(cur + 1);
			isused[i] = false;
		}
	}

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0;i < n;i++) cin >> num[i];
	sort(num, num + n);
	cal(0);
}