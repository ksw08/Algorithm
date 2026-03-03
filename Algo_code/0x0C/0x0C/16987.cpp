#include <bits/stdc++.h>
using namespace std;
int n, tmp;
int num[10][2];
int crack[10];
int cnt;

void cal(int cur) {
	if (cur == n) {
		for (int i = 0;i < n;i++) cnt += crack[i];
		if (tmp < cnt) {
			tmp = cnt;
		}
		cnt = 0;
		return;
	}

	if (crack[cur] == true) { //깨져있으면 그냥 다음꺼로 지나가
		cal(cur + 1);
		return;
	}
	bool hit = false;

	for (int j = 0;j < n;j++) {
		if (crack[j] == false) {
			if (cur == j) continue;
			hit = true;
				num[cur][0] -= num[j][1];
				num[j][0] -= num[cur][1];
				if (num[cur][0] <= 0) crack[cur] = true;
				if (num[j][0] <= 0) crack[j] = true;
				cal(cur + 1);
				num[cur][0] += num[j][1];
				num[j][0] += num[cur][1];
				if (crack[cur] == true) crack[cur] = false;
				if (crack[j] == true) crack[j] = false;
		}
	} 

	if(!hit) cal(cur + 1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> num[i][0] >> num[i][1];
	}
	cal(0);
	cout << tmp;
}