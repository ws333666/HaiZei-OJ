/*************************************************************************
    > File Name: 447.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月09日 星期四 17时06分07秒
 ************************************************************************/

#include<iostream>
using namespace std;
 
int num[1005] = {0};

int is_val(int n) {
	int m, flag = 1;
	while(n) {
		m = n % 10;
		n /= 10;
		if ((m == 7) || (m == 4)) continue;
		flag = 0;
	}
	if (flag) return 1;
	return 0;
}

void init() {
	for (int i = 1; i <= 1000; i++) {
		if (is_val(i)) num[i] = 1;
	}
	return ;
}

int main() {
	init();
	int n, flag = 0;
	cin >> n;
	for (int i = 0; i <= 1000; i++) {
		if (num[i] && n % i == 0) flag = 1;
	}
	if (flag) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
