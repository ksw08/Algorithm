#include <bits/stdc++.h>
using namespace std;
int paper[64][64];
int lastflag = 0;

bool check(int x,int y,int n) {
	for (int i = x;i < x+n;i++) {
		for (int j = y;j < y+n;j++) {
			if (paper[x][y] != paper[i][j])
				return false;
		}
	}
	return true;
}

void solve(int x, int y, int n) {
	if (check(x, y, n)) {
		cout << paper[x][y];
		return;
	}

	n /= 2;
	cout << '(';
	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < 2;j++) {
			solve(x + n * i, y + n * j, n);
		}
	}
	cout << ')';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 0;
	string pap;
	cin >> n;
	cin.ignore();
	for (int i = 0;i < n;i++) {
		getline(cin,pap);
		for (int j = 0;j < n;j++)
			paper[i][j] = pap[j]-'0';
	}

	solve(0, 0, n);

}