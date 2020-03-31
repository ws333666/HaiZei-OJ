/*************************************************************************
    > File Name: 183.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月13日 星期五 18时26分59秒
 ************************************************************************/

#include<stdio.h>

int func(int n) {
	if (n <= 0) return 0;
	if (n == 1) return 1;
	else if (n % 2 == 0) return 3 * func(n / 2) - 1;
	else return 3 * func((n + 1) / 2) - 1;
}



int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", func(n));
	return 0;
}
