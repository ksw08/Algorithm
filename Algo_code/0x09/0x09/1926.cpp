#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int draw[501][501] = {};
int vis[501][501];
int n, m;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int num, size1, maxsize;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	queue<pair<int, int>> Q;

	
	cin >> n >> m;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> draw[i][j];
		}
	}

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			if (draw[i][j] == 0 || vis[i][j] == 1)continue;
			vis[i][j] = 1;
			Q.push({ i,j });
			while (!Q.empty()) {
				pair<int, int> cur = Q.front();
				Q.pop();
				for (int k = 0;k < 4;k++) {
					int X = cur.X + dx[k];
					int Y = cur.Y + dy[k];
					if (X<0 || X>n || Y<0 || Y>m) continue;
					if (vis[X][Y] || draw[X][Y] != 1) continue;
					vis[X][Y] = 1;
					Q.push({ X,Y });
				}
				size1++;
			}
			if (maxsize < size1) {
				maxsize = size1;
			}
			size1 = 0;
			num++;
		}
	}

	cout << num << '\n' << maxsize;
}