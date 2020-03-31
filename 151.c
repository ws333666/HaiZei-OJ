/*************************************************************************
    > File Name: 151.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月13日 星期五 20时02分56秒
 ************************************************************************/

#include<stdio.h>

int func(char a, char b) {
	if (a == b) return 0;
	if (a == 'O' && b == 'Y' ||
		a == 'Y' && b == 'H' ||
		a == 'H' && b == 'O') {
		return 1;
	}
	return 2;
}



int main() {
	char ml, mr, ll, lr;
	scanf("%c %c %c %c", &ml, &mr, &ll, &lr);
	if (func(ml, ll) == 1) {
		if (func(ml, lr) != 2) {
			printf("MING");
		} else {
			if (func(mr, lr) == 1) {
				printf("MING");
			} else {
				printf("LIHUA");
			}
		}
	} else if (func(ml, ll) == 0) {
		if (func(mr, lr) == 1) {
			printf("MING");
		} else if (func(mr, lr) == 2) {
			printf("LIHUA");
		} else {
			printf("TIE");
		}
	} else {
		if (func(mr, ll) != 1) {
			printf("LIHUA");
		} else {
			if (func(mr, lr) != 2) {
				printf("MING");
			} else {
				printf("LIHUA");
			}
		}
	}

	return 0;
}
