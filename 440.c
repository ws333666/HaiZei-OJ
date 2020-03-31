/*************************************************************************
    > File Name: 440.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月13日 星期五 18时57分10秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int n, x, y, flag = 0;
	scanf("%d%d", &n, &x);
	for (int i = 1; i <= n; i++) {
		int a = i;
		while (a) {
			y = a % 10;
			a /= 10;
			if (y == x) {
				flag++;
			}
		} 
	}
	printf("%d\n", flag);
	return 0;
}
