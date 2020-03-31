/*************************************************************************
    > File Name: 157.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月13日 星期五 20时36分54秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = i; j <= n - 1; j++) {
			printf("%c", 'A' + j);
		}
	}

	return 0;
}
