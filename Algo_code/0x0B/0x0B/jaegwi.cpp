#include <bits/stdc++.h>
using namespace std;

void func1(int n) {
	if (n == 0)return;
	cout << n << ' ';
	func1(n - 1);
}

int func2(int n) {
	if (n == 0) return 0;
	return n + func2(n - 1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 0;
	cin >> n;
	func1(n);
	int sum = func2(n);
	cout << sum;

}