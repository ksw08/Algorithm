/*#include <bits/stdc++.h>
using namespace std;
int n = 0, m = 0;
int arr[10];

void permutation(int cur) {
	if (cur == m) {
		for (int i = 0;i < m;i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	int ini = 1;
	if (cur != 0) ini = arr[cur-1] + 1;
	for (int i = ini;i <= n;i++) {
		arr[cur] = i;
		permutation(cur + 1);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	permutation(0);
}
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 0, m = 0;
	int arr[10] = {0};
	int mask[10] = {0};
	cin >> n >> m;
	for (int i = 1; i <= n;i++) arr[i-1] = i;
	for (int i = 0;i < n;i++) {
		if(i<m)
		mask[i] = 1;
	}
	sort(mask, mask + n);
	do {
		for (int i = 0;i < n;i++) {
			if(mask[i] == 0)
			cout << arr[i] << ' ';
		}
		cout << '\n';
	} while (next_permutation(mask, mask + n));
}