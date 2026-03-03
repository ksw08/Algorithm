#include <bits/stdc++.h>
using namespace std;
int isused[15][15];
int cnt, n;

void queen(int k) {
	if (k == n) {
		cnt++;
		return;
	}

	for (int i = 0;i < n;i++) {
		if (isused[k][i] == 0) {
			isused[k][i] == true;
				for (int ii = 1;ii < n;ii++){
					if (i + ii > n - 1)
						continue;
					isused[k][i + ii]++;
				}
				for (int ii = 1;ii < n;ii++) {
					if (i - ii < 0)
						continue;
					isused[k][i - ii]++;
				}
				for (int ii = 1;ii < n;ii++) {
					if (k + ii > n-1)
						continue;
					isused[k+ii][i]++;
				}
				for (int ii = 1;ii < n;ii++) {
					if (k - ii < 0)
						continue;
					isused[k - ii][i]++;
				}
				for (int ii = 1;ii < n;ii++) {
					if (i + ii > n - 1 || k + ii > n - 1)
						continue;
					isused[k + ii][i + ii]++;
				}
				for (int ii = 1;ii < n;ii++) {
					if (i - ii < 0 || k - ii < 0)
						continue;
					isused[k - ii][i - ii]++;
				}
				for (int ii = 1;ii < n;ii++) {
					if (i - ii < 0 || k + ii > n - 1)
						continue;
					isused[k + ii][i - ii]++;
				}
				for (int ii = 1;ii < n;ii++) {
					if (i + ii > n - 1 || k - ii < 0)
						continue;
					isused[k - ii][i + ii]++;
				}
			queen(k + 1);
			isused[k][i] == false;
				for (int ii = 1;ii < n;ii++) {
					if (i + ii > n - 1)
						continue;
					isused[k][i + ii]--;
				}
				for (int ii = 1;ii < n;ii++) {
					if (i - ii < 0)
						continue;
					isused[k][i - ii]--;
				}
				for (int ii = 1;ii < n;ii++) {
					if (k + ii > n - 1)
						continue;
					isused[k + ii][i]--;
				}
				for (int ii = 1;ii < n;ii++) {
					if (k - ii < 0)
						continue;
					isused[k - ii][i]--;
				}
				for (int ii = 1;ii < n;ii++) {
					if (i + ii > n - 1 || k + ii > n - 1)
						continue;
					isused[k + ii][i + ii]--;
				}
				for (int ii = 1;ii < n;ii++) {
					if (i - ii < 0 || k - ii < 0)
						continue;
					isused[k - ii][i - ii]--;
				}
				for (int ii = 1;ii < n;ii++) {
					if (i - ii < 0 || k + ii > n - 1)
						continue;
					isused[k + ii][i - ii]--;
				}
				for (int ii = 1;ii < n;ii++) {
					if (i + ii > n - 1 || k - ii < 0)
						continue;
					isused[k - ii][i + ii]--;
				}

		}
			
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	queen(0);
	cout << cnt;
}