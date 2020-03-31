/*************************************************************************
    > File Name: 54.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月08日 星期三 11时26分01秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
using namespace std;
#define max_n 10000

int ans[max_n + 5] = {1, 1, 0};

int main() {
	int x;
	while (~scanf("%d", &x)) {
	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= ans[0]; j++) ans[j] *= i;
		for (int k = 1; k <= ans[0]; k++) {
			if (ans[k] < 10) continue;
			ans[k + 1] += ans[k] / 10;
			ans[k] %= 10;
			ans[0] += (k == ans[0]);
		}
	}
	long long sum = 1;
	memset(ans, 1, sizeof(ans));
	for (int i = 1; i <= ans[0]; i++) {
		if (ans[i] == 0) continue;
		sum *= ans[i];
	}
	cout << sum << endl;
}
	return 0;
}
