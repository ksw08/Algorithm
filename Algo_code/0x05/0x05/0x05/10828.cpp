#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, num;
	string option;
	stack<int> st;
	cin >> n;
	cin.ignore();

	while (n--) {
		cin >> option;

		if (option == "push") {
			cin.ignore();
			cin >> num;
			st.push(num);
		}
		else if (option == "pop") {
			if (!(st.empty())) {
				cout << st.top() << '\n';
				st.pop();
			}
			else cout << "-1\n";
		}
		else if (option == "empty") {
			cout << st.empty() << '\n';
		}
		else if (option == "size") {
			cout << st.size() << '\n';
		}
		else if(option == "top"){
			if (!(st.empty())) cout << st.top() << '\n';
			else cout << "-1\n";
		}
	}
}