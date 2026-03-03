#include <bits/stdc++.h>
using namespace std;
/*
* 플라스틱 숫자 한세트: 0~9까지 들어있음.
* 다솜이의 방번호 N < 1000000
* 6과 9는 뒤집어서 같이 쓸 수 있음
* 몇세트?(짝, 홀을 나누어야 함) / 6 or 9의 숫자보다 다른 숫자가 더 크거나 같을 경우 그대로 다른 숫자의 크기가 max 이다.
*/

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int maximum = 0;
	vector<int> count(10);

	cin >> n;

	while (n > 0) {
		count[n % 10]++;
		n /= 10;
	}

	for (int i = 0; i < 10;i++) {
		if (i == 6 || i == 9) continue;
		maximum = max(maximum, count[i]);
	}

	maximum = max(maximum, (count[6] + count[9] + 1) / 2);
	cout << maximum;

	return 0;
}