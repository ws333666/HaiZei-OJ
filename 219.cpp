/*************************************************************************
    > File Name: 219.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月09日 星期四 10时10分59秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;

int num[10005] = {0};

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	int n, l1, r1, l2, r2;
	cin >> n >> l1 >> r1 >> l2 >> r2;
	for (int i = 1; i <= n; i++) {
		cin >> num[i];
	}
	sort(num + l1, num + r1 + 1);
	sort(num + l2, num + r2 + 1, cmp);
	for (int i = 1; i <= n; i++) {
		if (i - 1) cout << " ";
		cout << num[i];
	}
	cout << endl;
	return 0;
}
