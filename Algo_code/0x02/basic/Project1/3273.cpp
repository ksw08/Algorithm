#include <bits/stdc++.h>
using namespace std;
/*
* n개의 수열, 1<  < 1000000
* x+y = 내가 지정한 수
* 이게 나오는 순서쌍 개수 찾기
*/
vector<int> num(1000001);
bool cnt[2000001] = {false};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, x, suc = 0;

	cin >> n;

	for (int i = 0; i < n;i++) {
		cin >> num[i];
	}
	cin >> x;

	for (int i = 0;i < n;i++) {
		if (x - num[i] > 0 && cnt[x - num[i]]) suc++;
		cnt[num[i]] = true;
	}

	cout << suc;

	return 0;
}