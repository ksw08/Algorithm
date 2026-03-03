#include <bits/stdc++.h>
using namespace std;
int board[101][101][101];
int dist[101][101][101];
int dx[6] = { 0,-1,0,1,0,0 };
int dy[6] = { 0,0,1,0,-1,0 };
int dz[6] = { -1,0,0,0,0,1 };
int m, n, h;

int main() {
	cin >> m >> n >> h;
	queue<tuple<int, int, int>> Q;

	for (int i = 0;i < h;i++) {
		for (int j = 0;j < n;j++) {
			for (int k = 0;k < m;k++) {
				dist[i][j][k] = -1;
			}
		}
	}

	for (int i = 0;i < h;i++) {
		for (int j = 0;j < n;j++) {
			for (int k = 0;k < m;k++) {
				cin >> board[i][j][k];
				if (board[i][j][k] == 1) {
					dist[i][j][k] = 0;
					Q.push({ j,k,i });
				}
			}
		}
	}
	
	while (!Q.empty()) {
		int X, Y, Z;
		tie(X, Y, Z) = Q.front();
		Q.pop();
		for (int i = 0;i < 6;i++) {
			int nx = X + dx[i];
			int ny = Y + dy[i];
			int nz = Z + dz[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m || nz < 0 | nz >= h) continue;
			if (dist[nz][nx][ny] != -1 || board[nz][nx][ny] == -1) continue;
			dist[nz][nx][ny] = dist[Z][X][Y] + 1;
			Q.push({ nx,ny,nz });
		}
	}
	int max = 0;

	for (int i = 0;i < h;i++) {
		for (int j = 0;j < n;j++) {
			for (int k = 0;k < m;k++) {
				if (board[i][j][k] == 0 && dist[i][j][k] == -1) {
					cout << "-1";
					return 0;
				}
				if (dist[i][j][k] > max) max = dist[i][j][k];
			}
		}
	}

	cout << max;
}