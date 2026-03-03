#include <bits/stdc++.h>
using namespace std;

/*
* 모: 다 같은 경우(1(등으로)) 1111
* 윷 : 같은 경우(0(배로)) 0000
* 걸: 3개 같은 경우(배로) 1000 0100 0010 0001
* 개: 2개 같은 경우(배로) 0011 1100 1010 0101 0110 1001 
* 도: 1개만 같은 경우(배로) 0111 1011 1101 1110
* 0 1 2 3
* 4 5 6 7
* 8 9 10 11
* 
* 추가 아이디어: 문자열을 이용해서 세수를 더하고 그 결과를 바탕으로 문자를 출력하는게 가장 간단함.
* 뭔가 수를 바탕으로 case를 나눈다? >> 일단 정렬 실행해서 생각해보기.
* 만약 수가 단순한 1과 0으로 이루어진 것이다? >> 숫자들의 합으로 case 나눌 수 있는지 확인해보기. / or 다른 사칙연산도 괜찮은듯.
*/

//첫번째 문제 풀이
/*int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v(12);
	for (int i = 0; i < 12;i++){
		cin >> v[i];
	}

	sort(v.begin(), v.begin()+4);
	sort(v.begin() + 4, v.begin() + 8);
	sort(v.begin() + 8, v.begin() + 12);


	for (int j = 0; j < 3;j++) {
		
		if (v[4 * j] == 1) cout << "E\n";
		else if (v[4 * j + 1] == 1) cout << "A\n";
		else if (v[4 * j + 2] == 1) cout << "B\n";
		else if (v[4 * j + 3] == 1) cout << "C\n";
		else if (v[4 * j + 3] == 0)  cout << "D\n";

	}


	return 0;
}*/


// 더 나은 방법
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string yoot;
	yoot = "DABCE";
	int result, input;

	for (int i = 0; i < 3;i++) {
		result = 0;
		for (int j = 0;j < 4;j++) {
			cin >> input;
			result += input;
		}
		cout << yoot[result] << "\n";
	}



	return 0;
}