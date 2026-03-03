#include <bits/stdc++.h>
using namespace std;
int n, m;
int maze[1001][1001];
int disj[1001][1001];
int disf[1001][1001];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
string maps;
#define X first
#define Y second

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	queue<pair<int, int>> Q;

	cin >> n >> m;
	for (int i = 0;i < n;i++) {
		fill(disj[i], disj[i] + m, -1);
		fill(disf[i], disf[i] + m, -1);
	}

	for (int i = 0;i < n;i++) {
		cin >> maps;
		for (int j = 0;j < m;j++) {
			maze[i][j] = maps[j];
			if (maps[j] == 'J') disj[i][j] = 0;
			if (maps[j] == 'F') {
				disf[i][j] = 0;
				Q.push({ i,j });
			}
		}
	}

	while (!Q.empty()) {
		pair<int, int>cur = Q.front();
		Q.pop();
		for (int i = 0;i < 4;i++) {
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			if (disf[nx][ny] != -1 || maze[nx][ny] == '#') continue;
			if (nx<0 || nx>=n || ny<0 || ny>=m) continue;
			disf[nx][ny] = disf[cur.X][cur.Y] + 1;
			Q.push({ nx,ny });
		}
	}

	for (int i = 0;i < n;i++) {
		for (int j = 0; j < m;j++) {
			if (disj[i][j] == 0) Q.push({ i,j });
		}
	}

	while (!Q.empty()) {
		pair<int, int>cur = Q.front();
		Q.pop();
		for (int i = 0;i < 4;i++) {
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			if (nx<0 || nx>=n || ny<0 || ny>=m) {
				cout << disj[cur.X][cur.Y] + 1;
				return 0;
			}
			if (maze[nx][ny] == '#' || disj[nx][ny] >= 0) continue;
			if (disf[nx][ny] != -1 && disf[nx][ny]<=disj[cur.X][cur.Y]+1) continue;
			disj[nx][ny] = disj[cur.X][cur.Y] + 1;
			Q.push({ nx,ny });
		}
	}
	cout << "IMPOSSIBLE";
}