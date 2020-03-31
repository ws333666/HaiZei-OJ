/*************************************************************************
    > File Name: a.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年03月25日 星期三 20时58分59秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <queue>
using namespace std;

struct node {
	int x, y;
};

int n, m, ans;
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};
char mmap[55][55];
queue<node> que;

int main() {
	cin >> m >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> mmap[i][j];
			if (mmap[i][j] == '@') {
				que.push({i, j});
			}
		}
	}
	while (!que.empty()) {
		node temp = que.front();
		que.pop();
		for (int i = 0; i < 4; i++) {
			int x = temp.x + dir[i][0];
			int y = temp.y + dir[i][1];
			if (mmap[x][y] == '.') {
				mmap[x][y] = 0;
				ans++;
				que.push({x, y});
			}
		}
	}
	cout << ans << endl;
	return 0;
}
