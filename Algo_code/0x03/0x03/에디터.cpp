/*
* L: 커서 왼쪽 이동
* D: 커서 오른쪽 이동
* B: 커서 왼쪽 문자 삭제 후 커서 왼쪽으로 한칸 이동
* P $: $라는 문자를 커서 왼쪽에 추가, 커서 오른쪽으로 한칸 이동  
* 여기서 맨 끝이나 맨 처음의 경우 L,D,B를 눌러도 변화X
* 초기 단어 길이 변수, 입력기 개수 변수, 입력 값 받을 string 필요
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int count;
	char q;
	string wor,insert;
	list<char> word;

	getline(cin, wor);

	for (auto e : wor) word.push_back(e);
	auto cursor = word.end();

	cin >> count;
	for (int i = 0;i < count;i++) {
		cin >> q;

		if (q == 'L') {
			if (cursor != word.begin()) cursor--;
		}
		else if (q == 'D') {
			if (cursor != word.end()) cursor++;
		}
		else if (q == 'B') {
			if (cursor != word.begin()) {
				cursor--;
				cursor = word.erase(cursor);
			}
		}
		else if (q == 'P') {
			cin >> q;
			word.insert(cursor, q);
		}

	}

	for (char end : word) cout << end;

}