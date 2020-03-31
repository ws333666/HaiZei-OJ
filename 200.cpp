/*************************************************************************
    > File Name: 200.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月08日 星期三 15时41分42秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
using namespace std;
#define max_n 1000000
int f[max_n + 5] = {0};

void init() {
	f[1] = 4, f[2] = 7;
	for (int i = 3; i <= 35; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}
	return ;
}

int main() {
	init();
	int n;
	double sum = 0;
	cin >> n;
	printf("%d/%d\n", f[n], f[n + 1]);
	for (int i = 1; i <= n; i++) {
		sum += (f[i] * 1.0) / (f[i + 1] * 1.0);
	}
	printf("%.2f\n",sum);
	return 0;
}
