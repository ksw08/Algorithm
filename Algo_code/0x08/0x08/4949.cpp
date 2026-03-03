#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	stack<char> gwalho;
	while (1) {
		int tf = 1;
		getline(cin, s);
		if (s == ".") break;

		for (auto g : s) {
			if (g == '[' || g == '(') {
				gwalho.push(g);
			}
			else if (g == ']' || g == ')') {
				if (!gwalho.empty()) {
					if (gwalho.top() == '[' && g == ']') gwalho.pop();
					else if (gwalho.top() == '(' && g == ')') gwalho.pop();
					else {
						tf = 0;
						break;
					}
				}
				else {
					tf = 0;
					break;
				}
			}
		}
		if (!gwalho.empty()) tf = 0;
		while(!gwalho.empty()) gwalho.pop();

		if (tf) cout << "yes" << '\n';
		else cout << "no" << '\n';
	}
}