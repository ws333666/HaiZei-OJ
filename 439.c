/*************************************************************************
    > File Name: 439.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月13日 星期五 16时40分56秒
 ************************************************************************/

#include<stdio.h>

/*int is_n(double a, double b) {
	int d = 1;
	if (a <= 0) {
		return d;
	}
	b = b * 0.98;
	a -= b;
	d++;
	return is_n(a, b);
}

int main() {
	double x, y = 2.0;
	scanf("%lf", &x);
	int m = is_n(x, y);
	printf("%d", m);
	return 0;
}*/

int main() {
	double x, a = 2.0;
	int flag = 0;
	scanf("%lf", &x);
	if (x <= 2)
		printf("1");
	do {
		x -= a;
		a *= 0.98;
		flag++;
	} while (x >= 0);
	printf("%d\n", flag);
	return 0;
}



