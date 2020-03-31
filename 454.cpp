/*************************************************************************
    > File Name: 454.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月09日 星期四 11时30分27秒
 ************************************************************************/

#include<iostream>
using namespace std;

int num[1005] = {0};

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		num[temp] += 1;
	}
	int flag = 0, ans = 0;
	for (int i = 0; i <= 1000; i++) {
		if (num[i]) ans += 1;
	}
	cout << ans << endl;
	for (int i = 0; i <= 1000; i++) {
		if (num[i]) {
			if (flag) cout << " ";
			cout << i;
			flag = 1;
		}
	}
	return 0;
}
