/*************************************************************************
    > File Name: 446.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月17日 星期二 15时55分57秒
 ************************************************************************/

#include <stdio.h>

int main() {
	int n;
	int mac[10][10];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("1 ");
		for (int j = 0; j < n; j++) {
			if (j != 0) printf(" ");
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}
