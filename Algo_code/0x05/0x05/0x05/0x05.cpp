#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x) {
	dat[pos] = x;
	if (pos != MX)pos++;
}

void pop() {
	if(pos != 0) pos--;
}

int top() {
	return dat[pos - 1];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	test();
}