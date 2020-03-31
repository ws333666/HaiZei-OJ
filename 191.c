/*************************************************************************
    > File Name: 191.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月21日 星期六 20时32分46秒
 ************************************************************************/

#include <stdio.h>
#define max_n 8000000

int prime[max_n + 5] = {0};

void init() {
	for (int i = 0; i <= max_n; i++) {
		if (!prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0]; j++) {
			if (prime[j] * i > max_n) break;
			prime[prime[j] * i] = 1;
			if (i & prime[j] == 0) break;
		}
	}
	return ;
}

void solve(int n, int m) {
	int a = -1, b = -1, c = -1, d = -1;
	int max_len = 0, min_len = max_n;
	for (int i = 2; i <= prime[0] && prime[i] <= m; i++) {
		if (prime[i - 1] < n) continue;
		int tmp = prime[i] - prime[i - 1];
		if (tmp < min_len) {
			a = prime[i - 1];
			b = prime[i ];
			min_len = tmp;
		}
	}
	if (a == -1) {
		printf("th");
	} else {
		printf("...")
	}
}

int main() {
	int n, m;
	while (~scanf("%d%d", &n, &m)) solve(n, m);

	return 0;
}
