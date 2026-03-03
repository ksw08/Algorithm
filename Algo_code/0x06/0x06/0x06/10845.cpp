#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	long num;
	string option;
	queue<long> q;

	cin >> n;

	while (n--) {
		cin >> option;

		if (option == "push") {
			cin >> num;
			q.push(num);
		}
		else if (option == "pop") {
			if (q.empty()) cout << "-1\n";
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (option == "size") {
			cout << q.size() << '\n';
		}
		else if (option == "empty") {
			cout << q.empty() << '\n';
		}
		else if (option == "front") {
			if(q.empty()) cout << "-1\n";
			else cout << q.front() << '\n';
		}
		else if (option == "back") {
			if (q.empty()) cout << "-1\n";
			else cout << q.back() << '\n';
		}
	}
}