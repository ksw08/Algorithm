//#include <bits/stdc++.h>
//using namespace std;
//int num[20];
//int isused[20];
//int res[20];
//int k = 1;
//
//void lotto(int cur) {
//	if (cur == 6) {
//		for (int i = 0;i < 6;i++) {
//			cout << res[i] << ' ';
//		}
//		cout << '\n';
//		return;
//	}
//
//	for (int i = 0;i < k;i++) {
//		if (cur != 0 && isused[i] == false && res[cur-1] < num[i]) {
//			res[cur] = num[i];
//			isused[i] = true;
//			lotto(cur + 1);
//			isused[i] = false;
//		}
//		if (cur == 0 && isused[i] == false) {
//			res[cur] = num[i];
//			isused[i] = true;
//			lotto(cur + 1);
//			isused[i] = false;
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	while (k != 0) {
//		cin >> k;
//		if (k == 0) return 0;
//		for (int i = 0;i < k;i++) cin >> num[i];
//		lotto(0);
//	}
//}

#include <bits/stdc++.h>
using namespace std;
int k = 1;
int num[20],mask[20];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	while (k != 0) {
		cin >> k;
		if (k == 0) return 0;
		for (int i = 0;i < k;i++) cin >> num[i];
		for (int ii = 6;ii < k;ii++) mask[ii] = 1;
		do {
			for (int i = 0;i < k;i++) {
				if (mask[i] == 0) {
					cout << num[i] << ' ';
				}
			}
			cout << '\n';
		} while (next_permutation(mask, mask + k));
		cout << '\n';
	}

}