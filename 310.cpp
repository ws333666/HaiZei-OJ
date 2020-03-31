/*************************************************************************
    > File Name: 310.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月28日 星期六 14时08分36秒
 ************************************************************************/

#include <iostream>
  
using namespace std;
#define max_n 1000000

int prime[max_n + 5] = {0};

int is_prime[max_n + 5] = {0};

void init(int n) {
	for (int i = 2; i <= n; i++) {
		if (!prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0]; j++) {
			if (prime[j] * i > n) break;
			prime[prime[j] * i] = 1;
			if (i % prime[j] == 0) break;
		}
	}
	return ;
}

//int cnt[max_n + 5] = {0};

int main() {
	long long n;
	cin >> n;
	init(n);
	for (int j = 1; j <= prime[0]; j++) {
		long long temp = prime[j], cnt = 0;
		while(temp <= n) {
			cnt += n / temp;
			temp *= prime[j];
		}
		cout << prime[j] << " " << cnt << endl;
	}
	return 0;
}
