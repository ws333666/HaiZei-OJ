/*************************************************************************
    > File Name: 441.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月13日 星期五 18时47分15秒
 ************************************************************************/

#include<stdio.h>




int main() {
	int x, n, sum, arg;
	scanf("%d%d", &x, &n);
	sum = 2 * n;
	arg = sum - ((x + n) / 7 * 4);
	printf("%d\n", arg);
	return 0;
}
