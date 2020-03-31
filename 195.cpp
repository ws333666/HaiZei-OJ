/*************************************************************************
    > File Name: 195.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月07日 星期五 10时17分51秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
 
int main() {
	int n, m, num[100005] = {0};
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> num[i];
	}
	for (int i = 1; i <= m; i++) {
		int temp;
		cin >> temp;
		int l = 1, r = n;
		while (l != r) {
			int mid = (l + r + 1) / 2;
			if (num[mid] <= temp) l = mid;
			else r = mid - 1;
		}
		if (i > 1) cout << " ";
		cout << num[l];
	}
	cout << endl;
	return 0;
}
