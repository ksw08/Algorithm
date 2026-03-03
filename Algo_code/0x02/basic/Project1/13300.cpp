#include <bits/stdc++.h>
using namespace std;
/*
* 방배정 규칙 > 성별 같게, 학년 같게, 한방에 한명도 가능
* 한 방에 배정할 수 있는 최대 인원 수 > K
* 참가 학생수 = n / 한방 최대 인원수  = K
* 학생의 성별 = s / 학년 = y
*/



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int k, n;
	vector<int> year(1001);
	vector<int> sex(1001);

	cin >> n >> k;
	for (int i = 0;i < n;i++) {
		cin >> sex[i] >> year[i];
	}

	for (int i = 0;i < n;i++) {
		for
	}

	return 0;
}