#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> num = { 1,3,2,165,132,0,351,6532,1,21 };

	sort(num.begin(),num.end());

	for (int i = 0;i < 10;i++)
		cout << num[i];


}