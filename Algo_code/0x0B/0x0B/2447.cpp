#include <bits/stdc++.h>
using namespace std;
char star[2188][2188];

void drwst(int x, int y, int n) {
	if (n == 3) {
		for (int i = 0;i < 3;i++) {
			for (int j = 0;j < 3;j++) {
				if (i == 1 && j == 1) {
					star[x + i][y + j] = ' ';
					continue;
				}
				star[x + i][y + j] = '*';
			}
		}
		return;
	}

	n /= 3;
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			if (i == 1 && j == 1) {
				for (int k = 0;k < n;k++) {
					for (int z = 0;z < n;z++) {
						star[x + n + k][y + n + z] = ' ';
					}
				}
				continue;
			}
			drwst(x + n * i, y + n * j, n);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 0;
	cin >> n;
	drwst(0, 0, n);
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cout << star[i][j];
		}
		cout << '\n';
	}

}