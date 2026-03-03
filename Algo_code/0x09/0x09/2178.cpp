#include <bits/stdc++.h>
using namespace std;
int dist[101][101];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0,1,0,-1 };
int n, m;
string mapp[102];


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	queue<pair<int, int>> Q;

	cin >> n >> m;
	for (int i = 0;i < n;i++)
		cin >> mapp[i];
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			dist[i][j] = -1;
		}
	}
	dist[0][0] = 1;
	Q.push({ 0,0 });

	while (!Q.empty()) {
		pair<int, int> cur = Q.front();
		Q.pop();
		for (int i = 0; i < 4;i++) {
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if (nx<0 || nx>=n || ny<0 || ny>=m) continue;
			if (dist[nx][ny] >= 0 || mapp[nx][ny] == 0) continue;
			dist[nx][ny] = dist[cur.first][cur.second]+1;
			Q.push({ nx,ny });
		}
	}

	cout << dist[n-1][m-1];
}