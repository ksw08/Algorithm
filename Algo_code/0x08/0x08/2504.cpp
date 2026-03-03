#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	stack<char> gwalho;
	int sum = 0;
	int mul = 1;

	cin >> s;

	for (int i = 0;i < s.size();i++) {
		if (s[i] == '(') {
			gwalho.push(s[i]);
			mul *= 2;
		}else if (s[i] == '[') {
			gwalho.push(s[i]);
			mul *= 3;
		}else if (s[i] == ')') {
			if (gwalho.empty() || gwalho.top() == '[') {
				cout << "0";
				return 0;
			}
			else if (s[i - 1] == '(') sum += mul;
			gwalho.pop();
			mul /= 2;
		}else if (s[i] == ']') {
			if (gwalho.empty() || gwalho.top() == '(') {
				cout << "0";
				return 0;
			}
			else if (s[i - 1] == '[') sum += mul;
			gwalho.pop();
			mul /= 3;
		}
	}

	if (gwalho.empty()) cout << sum;
	else cout << "0";

}