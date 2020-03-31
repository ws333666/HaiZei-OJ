/*************************************************************************
    > File Name: 397.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年03月18日 星期三 18时34分09秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;

int n, m, mmap[105][105], ans;
int dir[4][2] = {0, 1, 1, 0, 0, -1, -1, 0};

void func(int x, int y) {
	for (int i = 0; i < 4; i++) {
		int tx = x + dir[i][0];
		int ty = y + dir[i][1];
		if (mmap[tx][ty]) {
			mmap[tx][ty] = 0;
			func(tx, ty);
		}
	}
}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> mmap[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (mmap[i][j] != 0) {
				ans++;
				mmap[i][j] = 0;
				func(i, j);
			}
		}
	}
	cout << ans << endl;
	return 0;
}
