/*************************************************************************
    > File Name: 79.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月10日 星期五 10时45分30秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
#define max_n 10000000

int prime[max_n + 5] = {0};

int main() {
	for (int i = 2; i * i <= max_n; i++) {
		if (prime[i]) continue;
		for (int j = i * i; j <= max_n; j += i) {
			prime[j] = 1;
		}
	}
	int a, b;
	cin >> a >> b;
	prime[0] = 1, prime[1] = 1;
	for (int i = a; i <= b; i++) {
		if (prime[i]) continue;
		cout << i << endl;
	}
	return 0;
}
