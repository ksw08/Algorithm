#include <bits/stdc++.h>
using namespace std;
char board[5][5];
int mask[25];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int cnt,ans,s;
string insert;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 0;i < 5;i++) {
		cin >> insert;
		for (int ii = 0;ii < 5;ii++)
			board[i][ii] = insert[ii];
	}
	fill(mask + 7, mask + 25, true);

	do {
		queue<pair<int, int>> q;
		int visit[5][5] = {};
		int syp[5][5] = {};
		for (int i = 0;i < 25;i++) {
			if (!mask[i]) {
				int x = i / 5;
				int y = i % 5;
				syp[x][y] = true;

				if (q.empty()) {
					q.push({ x,y });
					visit[x][y] = true;
				}
			}
		}

		while (!q.empty()) {
			int x = 0, y = 0;
			tie(x, y) = q.front();
			q.pop();
			cnt++;
			if (board[x][y] == 'S')
				s++;
			for (int i = 0;i < 4;i++) {
				int nx = x + dx[i];
				int ny = y + dy[i];
				if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5 || visit[nx][ny] || !syp[nx][ny])
					continue;
				q.push({ nx,ny });
				visit[nx][ny] = true;
			}
		}

		if (cnt == 7 && s > 3)
			ans++;
		cnt = 0, s = 0;
		
	} while (next_permutation(mask, mask + 25));

	cout << ans;
}