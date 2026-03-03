#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string gwalho;
	stack<char> st;

	cin >> gwalho;
	int len = gwalho.size();
	int ans = 0;

	for (int i = 0;i < len;i++) {
		if (gwalho[i] == '(') st.push('(');
		else if (gwalho[i] == ')') {
			if (i != 0 && gwalho[i - 1] == '(') {
				st.pop();
				ans += st.size();
			}
			else if (i != 0 && gwalho[i - 1] != '(') {
				st.pop();
				ans++;
			}
		}
	}

	cout << ans << '\n';

}