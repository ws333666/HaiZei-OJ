/*************************************************************************
    > File Name: 521.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月12日 星期日 10时38分08秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
#define max_n 1000000 
int num[max_n + 5] = {0};

int prime[max_n + 5];
int is_prime[max_n + 5] = {1, 1, 0};

void init() {
	for (int i = 2; i <= max_n; i++) {
		if (!is_prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0]; j++) {
			if (prime[j] * i > max_n) break;
			is_prime[prime[j] * i] = 1;
			if (!(i % prime[j])) break;
		}
	}
	return ;
}

int main() {
	init();
	int n, r;
	int ans = 0, sum = 0;
	cin >> n >> r;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		num[temp]++;
	}
	for (int i = 0; i <= max_n; i++) {
		if (!num[i]) continue;
		for (int j = 0; j < r; j++) sum += i;
		if (!is_prime[sum]) ans++;
	}
	cout << ans << endl;
	return 0;
}
