#include <bits/stdc++.h>
using namespace std;

int pos;


int zet(int n, int x, int y) {
    if (n == 0) return 0;         

    int half = 1 << (n - 1);       
    int area = half * half;     

    if (x < half && y < half) pos = 0;            
    else if (x < half && y >= half) pos = 1;     
    else if (x >= half && y < half) pos = 2;      
    else pos = 3;                              

    if (pos == 1) y -= half;
    else if (pos == 2) x -= half;
    else if (pos == 3) { x -= half; y -= half; }

    return pos * area + zet(n - 1, x, y);
}

int n, x, y;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> x >> y;
	cout << zet(n, x, y);
}