/*************************************************************************
    > File Name: 455.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月09日 星期四 18时36分00秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
 
int num[10] = {0};

int gcd(int a, int b) {
	return b ? gcd(b, a % b) : a;
}


int main() {
	for (int i = 0; i < 3; i++) {
		cin >> num[i];
	}
	sort(num, num + 3);
	int a = num[0];
	int b = num[2];
	int x = gcd(a, b);
	printf("%d/%d", a / x, b / x);
	return 0;
}
