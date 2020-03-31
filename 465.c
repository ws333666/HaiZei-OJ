/*************************************************************************
    > File Name: 465.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月13日 星期五 19时16分22秒
 ************************************************************************/

#include<stdio.h>

int digit(long long int n, int k) {
	int a = 0;
	do {
		a = n % 10;
		n /= 10;
		k--;
	} while (k);
	return a;
}


int main() {	
	long long int n;
	int k;
	scanf("%lld%d", &n, &k);
	printf("%d\n", digit(n, k));
	return 0;
}
