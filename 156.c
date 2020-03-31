/*************************************************************************
    > File Name: 156.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月13日 星期五 11时43分58秒
 ************************************************************************/

#include<stdio.h>


int is_prime (int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int is_power (int n) {
	switch (n) {
		case 1 :
		case 4 :
		case 9 :
		case 16 :
		case 25 :
		case 36 :
		case 49 :
		case 64 :
		case 81 : return 1;
	}
	return 0;
}

int main() {
	 int a, b;
	 scanf("%d %d", &a, &b);
	 int flag = 0, arg = 0;
	 for (int i = a; i <= b; i++) {
		int ab = i / 1000 * 10 + i / 100 % 10;
		int cd = i / 10 % 10 * 10 + i % 10;
		if (is_prime(i) && is_power(ab) && is_power(cd)) {
			if (flag == 1) {
				printf(" ");
			}
			printf("%d",i);
			flag = 1;
			arg++;
		}
	 }
	printf("\n%d\n", arg);
	return 0;
}
