#include <bits/stdc++.h>
using namespace std;
int t, m, n, k, x, y, group;
int board[51][51];
int vis[51][51];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
#define X first
#define Y second


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 0;i < 51;i++) fill(board[i], board[i] + 51, 0);
	queue<pair<int, int>> bech;

	cin >> t;
	while (t--) {
		cin >> m >> n >> k;
		for (int i = 0;i < k;i++) {
			cin >> x >> y;
			board[y][x] = 1;
		}
		for (int i = 0;i < n;i++) {
			for (int j = 0;j < m;j++) {
				if (board[i][j] == 1 && vis[i][j] == 0) {
					vis[i][j] = 1;
					bech.push({ i,j });
					while (!bech.empty()) {
						pair<int, int> cur = bech.front();
						bech.pop();
						for (int i = 0;i < 4;i++) {
							int nx = cur.X + dx[i];
							int ny = cur.Y + dy[i];
							if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
							if (vis[nx][ny] != 0 || board[nx][ny] != 1) continue;
							vis[nx][ny] = 1;
							bech.push({ nx,ny });
						}
					}
					group++;
				}
			}
		}
		cout << group << "\n";
		for (int i = 0;i < 51;i++) {
			fill(board[i], board[i] + 51, 0);
			fill(vis[i], vis[i] + 51, 0);
		}
		group = 0;
	}

}