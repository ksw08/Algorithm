/* 키로거
* - : cursor 앞에 있는 글자 제거
* >,<: cusor 좌우로 밀기
* 이거말곤 기능 없음
* 근데 이제 테스트 케이스의 개수가 여러개임
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string wor;
	int count;

	cin >> count;
	cin.ignore();

	while (count--) {
		list<char> word;
		auto cursor = word.end();
		getline(cin, wor);

		for (char e : wor) {
			if (e == '<') {
				if (cursor != word.begin())
					cursor--;
			}
			else if (e == '>') {
				if (cursor != word.end())
					cursor++;
			}
			else if (e == '-') {
				if(cursor != word.begin()){
					cursor--;
					cursor = word.erase(cursor);
				}
			}
			else {
				word.insert(cursor, e);
			}
		}
		
		for (char con : word) cout << con;
		cout << '\n';
	}

}