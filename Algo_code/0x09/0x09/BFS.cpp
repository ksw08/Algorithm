#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[502][502];
int vis[502][502];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int n = 7, m = 10;

int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	queue<pair<int, int>> Q;
	vis[0][0] = 1;
	Q.push({ 0,0 });
	while (!Q.empty()) {
		pair<int, int> cur = Q.front();
		Q.pop();
		for (int i = 0;i < 3;i++) {
			int dx = cur.X + dx[i];
			int dy = cur.Y + dy[i];
			if (dx < 0 || dx>7 || dy < 0 || dy>10) continue;
			if (vis[dx][dy] || board[dx][dy] != 1)continue;
			vis[dx][dy] = 1;
			Q.push({ dx,dy });
		}
	}
}