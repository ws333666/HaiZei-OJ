/*************************************************************************
    > File Name: 204.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月17日 星期二 15时41分05秒
 ************************************************************************/

#include <stdio.h>

int main() {
	int mac[31][31];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &mac[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < i + 1; j++) {
			//if (j != 0) printf(" ");
			printf("%d", mac[i][j]);
		}
		printf("\n");
	}
	return 0;
}
