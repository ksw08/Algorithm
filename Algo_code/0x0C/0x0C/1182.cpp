#include <bits/stdc++.h>
using namespace std;
int num[21];
int cnt,n,s;

void cal(int cur,int sum) {
	if (cur == n) {
		if(sum == s) cnt++;
		return;
	}

	cal(cur+1, sum);
	cal(cur+1, sum + num[cur]);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> s;
	for (int i = 0;i < n;i++) {
		cin >> num[i];
	}
	cal(0,0);
	if (s == 0) cnt--;
	cout << cnt;
}
