#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, k;
	list<int> kill;
	cin >> N >> k;
	for (int i = 0;i < N;i++) kill.push_back(i + 1);
	auto it = kill.begin();

	cout << '<';
	while (N--) {
		for (int i = 1;i < k;i++) {
			if (it != kill.end())it++;
			if(it == kill.end()){
				it = kill.begin();
			}
			
		}
		if(N!=0)
		cout << *it << ',' << ' ';
		else cout << *it;
		it = kill.erase(it);
		if (it == kill.end()) it = kill.begin();
	}
	cout << '>';

}