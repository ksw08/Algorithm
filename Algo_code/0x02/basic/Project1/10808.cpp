#include <bits/stdc++.h>
using namespace std;

/*int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	vector<int> alpha(26);
	getline(cin, s);

	for (int i = 0; i < s.size(); i++) {
		alpha[s[i] - 'a']++;
	}

	for (int i = 0;i < 26;i++) {
		cout << alpha[i] << " ";
	}

	return 0;
}*/

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v;

	for (int i = 0; i < 20;i++) {
		cin >> v[i];
	}

	for (int i = 0; i < 20;i++) {
		cout << v[i];
	}


	return 0;
}