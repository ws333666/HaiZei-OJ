/*************************************************************************
    > File Name: 203.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月08日 星期三 18时30分11秒
 ************************************************************************/

#include<iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
int mark[15][15];
int num[105];

bool arm(int a, int b) {
	return a > b;
}

int main() {
	int m, n, cnt = 0;
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mark[i][j];
			num[cnt] = mark[i][j];
			cnt++;
		}
	}
	for (int i = 0; i < n; i++) {
		int ans = mark[0][i];
		for (int j = 0; j < m; j++) {
			if (ans < mark[j][i]) ans = mark[j][i];
		}
		cout << ans << endl;
	}
	sort(num, num + cnt);
	int flag = 0, sum = 0;
	for (int i = cnt - 1; i >= 0; i--) {
		sum += num[i];
		if (flag) cout << " ";
		cout << num[i];
		flag = 1;
	}
	cout << endl;
	int arg = round(1.0 * sum / cnt), c = 0;
	cout << arg << endl;
	for (int i = 0; i < cnt; i++) {
		if (num[i] < arg) continue;
		c++;
	}
	cout << c << endl;
	return 0;
}
