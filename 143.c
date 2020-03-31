/*************************************************************************
    > File Name: 143.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月13日 星期五 16时29分26秒
 ************************************************************************/

#include<stdio.h>

int is_power(int n) {
	if (n % 6 == 0) return 1;
	else return 0;
}

int is_func(int n) {
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


int is_prime (int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i ==0) return 0;
	}
	return 1;
}



int main() {
	int a, b, arg = 0, flag = 0;
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++) {
		int ab = i / 1000 * 10 + i / 100 % 10;
		int cd = i / 10 % 10 * 10 + i % 10;
		if (is_power(i) && is_func(cd) && is_prime(ab)){
			if (arg == 1) {
				printf(" ");
			}
			printf("%d",i);
			arg = 1;
			flag++;
		}
	}
	printf("\n%d\n", flag);
	return 0;
}
