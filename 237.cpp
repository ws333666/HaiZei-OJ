/*************************************************************************
    > File Name: 237.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年03月11日 星期三 19时51分26秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;

int n, num[15], cnt, mark[15];

void func(int left) {
	if (left == 0) {
		for (int i = 0; i < cnt; i++) {
			i && cout << " ";
			cout << num[i];
		}
		cout << endl;
		return ;
	}
	for (int i = 1; i <= n; i++) {
		if (mark[i] == 0) {
			mark[i] = 1;
			num[cnt] = i;
			cnt++;
			func(left - 1);
			cnt--;
			mark[i] = 0;
		}
	}
}

int main() {
	cin >> n;
	func(n);
	return 0;
}
