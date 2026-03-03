#include <bits/stdc++.h>
using namespace std;
int n, m;
int num[10];
int res[10];
int isused[10];

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
		if (cur > 0 && tmp != num[i] &&  res[cur - 1] <= num[i] && !isused[i]) {
			res[cur] = num[i];
			isused[i] = true;
			tmp = num[i];
			cal(cur + 1);
			isused[i] = false;
		}
		if(cur == 0 && tmp != num[i] && !isused[i]){
			res[cur] = num[i];
			tmp = num[i];
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
	for (int i = 0;i < n;i++) cin >> num[i];
	sort(num, num + n);
	cal(0);
}