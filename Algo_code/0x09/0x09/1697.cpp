#include <bits/stdc++.h>
using namespace std;
int dis[100001];
int n, k,nex;
int dp[2] = { -1,1 };

int main() {
	cin >> n >> k;
	if (n == k) {
		cout << "0";
		return 0;
	}
	queue<int> Q;
	fill(dis, dis + 100001, -1);
	dis[n] = 0;
	Q.push(n);

	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();
		for (int i = 0;i < 3;i++) {
			if (i < 2) nex = cur + dp[i];
			if (i == 2) nex = cur * 2;
			if (nex == k) {
				cout << dis[cur] + 1;
				return 0;
			}
			if (nex < 0 || nex > 100000) continue;
			if (dis[nex] != -1) continue;
			dis[nex] = dis[cur] + 1;
			Q.push(nex);
		}
	}

}