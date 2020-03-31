/*************************************************************************
    > File Name: 199.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月14日 星期六 11时18分54秒
 ************************************************************************/

#include <stdio.h>

int k, m, a[10];

int f(int x) {
	if (x < 10) return x;
	return a[0] * f(x - 1) + a[1] * f(x - 2) + a[2] * f(x - 3) + a[3] * f(x - 4) + a[4] * f(x - 5) + a[5] * f(x - 6) + a[6] * f(x - 7) + a[7] * f(x - 8) + a[8] * f(x - 9) + a[9] * f(x - 10);
}


int main() {
	scanf("%d %d", &k, &m);
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	printf("%d\n", f(k) % m);
	return 0;
}
