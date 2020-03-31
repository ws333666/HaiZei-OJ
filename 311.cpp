/*************************************************************************
    > File Name: 311.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月10日 星期五 11时33分45秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
#define max_n 10000000

int prime[max_n + 5] = {0};
int is_prime[max_n + 5] = {0};
int gcd (int a, int b) {
	return b ? gcd(b, a % b) : a;
}

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
	int n;
	scanf("%d", &n);
	int ans = 0;
	is_prime[0] = is_prime[1] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int x = gcd(i, j);
			if (!is_prime[x]) ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
