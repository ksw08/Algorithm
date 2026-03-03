#include <bits/stdc++.h>
using namespace std;
char star[3073][6144];

void drwst(int x, int y, int n) {
	if (n == 3) {
		star[x][y] = '*';
		star[x+1][y-1] = '*';
		star[x + 1][y + 1] = '*';
		for (int i = y-2;i <= y+2;i++)
			star[x + 2][i] = '*';
		return;
	}

	n /= 2;
	drwst(x, y, n);
	drwst(x+n, y-n, n);
	drwst(x+n, y+n, n);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 0;
	cin >> n;
	drwst(0, n - 1, n);
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < 2*n;j++) {
			if (star[i][j] == '*')
				cout << '*';
			else
				cout << ' ';
		}
		cout << '\n';
	}
}