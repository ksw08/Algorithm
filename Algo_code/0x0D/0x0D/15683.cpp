#include <bits/stdc++.h>
using namespace std;
int n, m, cnt, blank, ans;
int board[10][10];
int visit[10][10];
int dir[4] = { 0,1,2,3 };
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
queue<int, int> q;
pair<int, int> tv[10];

int cal(int cur, int cctv) {
	if (cur == cnt) {
		for (int i = 0;i < n;i++) {
			for (int j = 0;j < m;j++) {
				if (board[i][j] == 0)
					blank++;
			}
		}
		ans = max(ans, blank);
		return;
	}

	for (int i = 0;i < cnt;i++) {
		for (int ii = 0;ii < 4;ii++) {
			while (!q.empty()) {
				pair<int, int> pos = q.front();
				q.pop();
				for (int j = 0;j < 4;j++) {
					int nx = pos.first + dx[j];
					int ny = pos.second + dy[j];
					if (nx < 0 || nx >= n || ny < 0 || ny >= m || !visit[nx][ny] || board[nx][ny] == 6) continue;
					if (dir[j] == 0 && cctv == 1) {
						if (j == 1 || j == 2 || j == 3) continue;
					}
					if (dir[j] == 1 && cctv == 1) {
						if (j == 0 || j == 2 || j == 3) continue;
					}
					if (dir[j] == 2 && cctv == 1) {
						if (j == 0 || j == 1 || j == 3) continue;
					}
					if (dir[j] == 3 && cctv == 1) {
						if (j == 0 || j == 1 || j == 2) continue;
					}
					if ((dir[j] == 0 || dir[j] == 2) && cctv == 2) {
						if (j == 1 || j == 3) continue;
					}
					if ((dir[j] == 1 || dir[j] == 3) && cctv == 2) {
						if (j == 0 || j == 2) continue;
					}
					if (dir[j] == 0 && cctv == 3) {
						if (j == 2 || j == 3) continue;
					}
					if (dir[j] == 1 && cctv == 3) {
						if (j == 0 || j == 3) continue;
					}
					if (dir[j] == 2 && cctv == 3) {
						if (j == 0 || j == 1) continue;
					}
					if (dir[j] == 3 && cctv == 3) {
						if (j == 1 || j == 2) continue;
					}
					if (dir[j] == 0 && cctv == 4) {
						if (j == 2) continue;
					}
					if (dir[j] == 1 && cctv == 4) {
						if (j == 3) continue;
					}
					if (dir[j] == 2 && cctv == 4) {
						if (j == 0) continue;
					}
					if (dir[j] == 3 && cctv == 4) {
						if (j == 1) continue;
					}
					if (board[nx][ny] == 0)
						board[nx][ny] = '#';
					q.push({ nx,ny });
					visit[nx][ny] = true;
				}
			}
			cal(cur+1,)
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int k = 0;
	cin >> n >> m;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> board[i][j];
			if (board[i][j] <= 5 && board[i][j] >= 1) {
				tv[k++] = { i,j };
				cnt++;
			}
		}
	}
	q.push(tv[0]);
	visit[tv[0].first][tv[0].second] = true;
	cal(0, board[tv[0].first][tv[0].second]);



}