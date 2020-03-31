/*************************************************************************
    > File Name: 208.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月09日 星期四 10时00分10秒
 ************************************************************************/

#include<iostream>
using namespace std;
 
int num[105] = {0};

int main() {
	int m, n, ans = 0;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int temp;
		cin >> temp;
		num[temp]++;
	}
	cin >> n;
	for (int i = 100; i >= 1; i--) {
		ans = num[i];
		if (ans >= n) break;
	}
	cout << ans << endl;
	return 0;
}
