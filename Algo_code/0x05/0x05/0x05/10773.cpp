#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long k, num, total = 0;
	stack<long> money;
	 
	cin >> k;
	cin.ignore();

	while (k--) {
		cin >> num;
		if (num == 0 && !(money.empty())) money.pop();
		else money.push(num);
	}
	k = money.size();
	
	for (int i = 0;i < k;i++) {
		if (!(money.empty())) {
			total += money.top();
			money.pop();
		}
	}

	cout << total;
}