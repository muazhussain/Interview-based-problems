// Problem link: https://www.spoj.com/problems/NAKANJ/

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
	#include "debug.h"
#else
	#define out(...) 0
#endif

int dx[] = {-2, +2, -2, +2, -1, +1, -1, +1};
int dy[] = {-1, -1, +1, +1, -2, -2, +2, +2};

int vis[9][9];
pair<int, int> start, dest;


bool valid(int r, int c) {
	return (r >= 1 && r <= 8 && c >= 1 && c <= 8);
}

int bfs() {
	queue<pair<pair<int, int>, int>> q;
	q.push({start, 0});
	while(!q.empty()) {
		auto cur = q.front();
		auto cell = cur.first;
		q.pop();
		vis[cell.first][cell.second] = 1;
		if(cell == dest) {
			return cur.second;
		}
		for(int i = 0; i < 8; ++i) {
			int r = cell.first + dx[i];
			int c = cell.second + dy[i];
			if(valid(r, c) && !vis[r][c]) {
				q.push({{r, c}, cur.second +1});
			}
		}
	}
	return -1;
}

void solve() {
	string a, b;
	cin >> a >> b;
	start = {a[0] - 'a' + 1, a[1] - '0'};	
	dest = {b[0] - 'a' + 1, b[1] - '0'};	
	memset(vis, 0, sizeof(vis));
	cout << bfs() << "\n";
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T = 1;
	cin >> T;
	while(T--) {
		solve();
	}
	return 0;
}
