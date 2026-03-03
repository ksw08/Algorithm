#include <bits/stdc++.h>
using namespace std;
int board[101][101];
int vis[101][101];
int n, cnt1, cnt2;
string rgb;
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
#define X first
#define Y second

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;

	for (int i = 0;i < n;i++) {
		cin >> rgb;
		for (int j = 0;j < n;j++) {
			board[i][j] = rgb[j];
		}
	}

	queue<pair<int, int>> Q;

	for (int i = 0; i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (vis[i][j] == 0) {
				vis[i][j] = 1;
				Q.push({ i,j });
				cnt1++;
			}
			while (!Q.empty()) {
				pair<int, int> cur = Q.front();
				Q.pop();
				for (int k = 0;k < 4;k++) {
					int nx = cur.X + dx[k];
					int ny = cur.Y + dy[k];
					if (nx < 0 || nx >= n || ny<0 || ny>n) continue;
					if (vis[nx][ny] != 0 || board[nx][ny] != board[cur.X][cur.Y]) continue;
					vis[nx][ny] = 1;
					Q.push({ nx,ny });
				}
			}
		}
	}

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (board[i][j] == 'R') board[i][j] = 'G';
		}
	}

	for (int i = 0; i < n;i++) fill(vis[i], vis[i] + 101, 0);

	for (int i = 0; i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (vis[i][j] == 0) {
				vis[i][j] = 1;
				Q.push({ i,j });
				cnt2++;
			}
			while (!Q.empty()) {
				pair<int, int> cur = Q.front();
				Q.pop();
				for (int k = 0;k < 4;k++) {
					int nx = cur.X + dx[k];
					int ny = cur.Y + dy[k];
					if (nx < 0 || nx >= n || ny<0 || ny>n) continue;
					if (vis[nx][ny] != 0 || board[nx][ny] != board[cur.X][cur.Y]) continue;
					vis[nx][ny] = 1;
					Q.push({ nx,ny });
				}
			}
		}
	}

	cout << cnt1 << " " << cnt2;
}