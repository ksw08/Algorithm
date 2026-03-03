#include <bits/stdc++.h>
using namespace std;
int num[10];
int isused[10];
int n, m;

void nm(int k) {
	if (k == m) {
		for (int i = 0;i < m;i++) {
				cout << num[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 0;i < n;i++) {
		if (!isused[i]) {
			num[k] = i+1;
			isused[i] = true;
			nm(k + 1);
			isused[i] = false;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	nm(0);

}