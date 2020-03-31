/*************************************************************************
    > File Name: 53-1.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月08日 星期三 11时03分57秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 1000000
int prime[max_n + 5] = {0};
int f[max_n + 5] = {0};
int cnt[max_n + 5] = {0};

void init() {
	for (int i = 2; i <= max_n; i++) {
		if (!prime[i]) {
			prime[++prime[0]] = i;
			f[i] = i + 1;
			cnt[i] = i * i;
		}
		for (int j = 1; j <= prime[0]; j++) {
			if (prime[j] * i > max_n) break;
			prime[prime[j] * i] = 1;
			if (i % prime[j] == 0) {
				f[prime[j] * i] = f[i] * (cnt[i] * prime[j] - 1) /
				(cnt[i] - 1);
				cnt[prime[j] * i] = cnt[i] * prime[j];
				break;
			} else {
				f[prime[j] * i] = f[prime[j]] * f[i];
				cnt[prime[j] * i] = prime[j] * prime[j];
			}
		}
	}
	return ;
}


int main() {
	init();
	long long ans = 0;
	for (int i = 2; i <= max_n; i++) {
		if (ans < f[i]) ans = f[i];
	}
	cout << ans << endl;
	return 0;
}
