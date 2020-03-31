/*************************************************************************
    > File Name: 38.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月18日 星期三 16时38分19秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#define max_n 1000000

int64_t prime[max_n + 5] = {0, 1, 2};
 
int64_t func(int64_t n) {
	if (prime[n]) return prime[n];
	return prime[n] = func(n - 1) + func(n - 2);
}

int main() {
	int64_t n;
	scanf("%" PRId64, &n);
	printf("%" PRId64 "\n", func(n));
	return 0;
}
