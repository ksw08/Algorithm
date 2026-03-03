#include <bits/stdc++.h>
using namespace std;
/*
* 홀수 뽑아서 전부 합해서 출력
* 최소 홀수 뽑아서 아래 출력
* 홀수 없을 시 -1 출력
*/

/*int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	vector<int> num(7);
	vector<int> odd(7);
	int index = 0;
	int result = 0;

	for (int i = 0; i < 7;i++) {
		cin >> num[i];
	}
	sort(num.begin(), num.end());
	for (int i = 0;i < 7;i++) {
		if (num[i] % 2 != 0) {
			odd[index] = num[i];
			index++;
		}
	}
	
	for (int i = 0;i < 7;i++) {
		result += odd[i];
	}
	
	if (result == 0) cout << "-1";
	else {
		cout << result << "\n" << odd[0];
	}


	return 0;
} // not bad 일단 구현은 해봄 근데 더 나은 방법이 있음*/

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x, odd = 0, sum = 0, min = 100;

	for (int i = 0;i < 7;i++) {
		cin >> x;

		if (x & 1) {
			sum += x;
			odd += 1;

			if (x < min) {
				min = x;
			}
		}
	}

	if (odd) cout << sum << "\n" << min;
	else cout << "-1";

	return 0;
}