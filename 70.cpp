/*************************************************************************
    > File Name: 70.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月06日 星期四 13时08分49秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
#define max_n 1000

int prime[max_n + 5] = {1, 1, 0};

void init() {
	for (int i = 2; i <= max_n; i++) {
		if (prime[i]) continue;
		for (int j = i * i; j <= max_n; j += i) {
			prime[j] = 1;
		}
	}
	return ;
}

int main() {
	init();
	prime[2] = 1, prime[3] = 1, prime[5] = 1;
	int n, temp = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (prime[i]) continue;
		temp = i;
		for (int j = 1; j <= n; j++) {
			if (j % temp == 0) prime[j] = 0;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (prime[i]) {
			cout << i << endl;
		}
	}
	return 0;
}
