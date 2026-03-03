#include <bits/stdc++.h>
using namespace std;

/*
* 영식 요금제
* - 10원: ~29 / 20원: 30 ~ 59
* 민식 요금제
* - 15원: ~59초 / 30원: 60 ~ 119
*/

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int Y = 0, M = 0, num;
	vector<int> time(20);
	
	cin >> num;

	for (int i = 0;i < num;i++) {
		cin >> time[i];
	}

	for (int i = 0; i < num;i++) Y = (time[i] / 30 + 1) * 10;

	for (int i = 0; i < num;i++) M = (time[i] / 60 + 1) * 15;


	return 0;
}