#include<bits/stdc++.h>
using namespace std;

void hanoi(int cp, int np, int n) {
	if (n == 1) {
		cout << cp << ' ' << np << '\n';
		return;
	}
	hanoi(cp, 6-cp-np, n - 1);
	cout << cp << ' ' << np << '\n';
	hanoi(6 - cp - np, np, n - 1);
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 0;
	cin >> n;
	cout << (1 << n) - 1 << '\n';
	hanoi(1, 3, n);
}