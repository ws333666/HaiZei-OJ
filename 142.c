/*************************************************************************
    > File Name: 142.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月13日 星期五 16时19分34秒
 ************************************************************************/

#include<stdio.h>

int is_prime(int n) {
	int y = n, m = 0;
	while (y) {
		m = m * 10 + y % 10;
		y /= 10;
	}
	if (m == n) return 1;
	else return 0;
}

int is_power(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}


int main() {
	int a, b, arg = 0;
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++) {
		if (is_prime(i) && is_power(i)) {
			if (arg == 1) {
				printf(" ");
			}
			printf("%d", i);
			arg = 1;
		}
	}
	printf("\n");
	return 0;
}
