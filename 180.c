/*************************************************************************
    > File Name: 180.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月13日 星期五 19时27分12秒
 ************************************************************************/

#include<stdio.h>

long long int func(int n) {
	long long int sum = 1;
	for (int i = 1; i <= n; i++) {
		sum *= 2;
	}
	return sum;
}


int main() {
	int n;
	scanf("%d", &n);
	printf("%lld\n", func(n));

	return 0;
}
