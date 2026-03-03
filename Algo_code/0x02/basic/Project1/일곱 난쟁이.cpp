#include <bits/stdc++.h>
using namespace std;

/*
* 9명의 난쟁이중 7명 찾기
* 7난쟁이들의 키의 합은 100
* 키는 100을 넘지 않는 자연수
* 가능한 정답이 여러개면 아무거나 하나 출력
* 일곱 난쟁이의 키를 오름차순으로 출력
* 0x02 중에서 이게 가장 어려웠음. 비슷한 부르트 포스 문제 여러개 풀어봐야할 듯.
*/

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int total = 0;
	int num = 0;
	vector<int> height(9);
	vector<int> cuttie(7);

	for (int i = 0;i < 9;i++) {
		cin >> height[i];
	}

	for (int i = 0;i < 8;i++) {
		total = 0;
		for (int j = i + 1;j < 9;j++) {
			total = 0;
			for (int k = 0, num = 0;k < 9;k++) {
				if (!(i == k) && !(j == k)) {
					total += height[k];
					cuttie[num] = height[k];
					num++;
				}
			}
			if (total == 100) break;
		}
		if (total == 100) break;
	}

	sort(cuttie.begin(), cuttie.end());
	for (int q = 0; q < 7;q++)
		cout << cuttie[q] << "\n";


	return 0;
}