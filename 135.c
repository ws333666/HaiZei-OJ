/*************************************************************************
    > File Name: 135.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月13日 星期五 15时53分20秒
 ************************************************************************/

#include<stdio.h>

int day_month (int y, int m) {
	switch (m) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: return 31;
		case 4:
		case 6:
		case 9:
		case 11: return 30;
	}
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
		return 29;
	} else {
		return 28;
	}
}


int main() {
	int x, y, m, d;
	scanf("%d %d %d %d", &x, &y, &m, &d);
	d += x;
	while (d > day_month(y, m)) {
		d -= day_month(y, m);
		m++;
		if (m == 13) {
			y++;
			m = 1;
		}
	}
	printf("%d %d %d\n", y, m, d);
	return 0;
}
