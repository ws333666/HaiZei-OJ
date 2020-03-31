/*************************************************************************
    > File Name: 191.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月08日 星期三 19时04分44秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
using namespace std;
#define max_n 8000000

int prime[max_n + 5] = {0};
int is_prime[max_n + 5] = {0};

void init() {
	for (int i = 2; i <= max_n; i++)  {
		if (!is_prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0]; j++) {
			if (prime[j] * i > max_n) break;
			is_prime[prime[j] * i] = 1;
			if (i % prime[j] == 0) break;
		}
	}
	return ;
}

int main() {
	init();
	int l, r;
	cin >> l >> r;
	int min1 = -1, min2, max1, max2;
	for (int i = l; i < r; i++) {
		if (!is_prime[i]) {
			int next = i + 1;
			while (is_prime[next]) {
				next++;
			}
			if (next > r) break;
			if (min1 == -1) {
				min1 = max1 = i;
				min2 = max2 = next;
			} else if (min2 - min1 > next - i) {
				min1 = i;
				min2 = next;
			} else if (max2 - max1 < next - i) {
				max1 = i;
				max2 = next;
			}
		}
	}
	if (min1 == -1) {
		printf("There are no adjacent primes.");
	} else {
		printf("%d,%d are closest, %d,%d are most distant.", min1, min2, 
		max1, max2);
	}
	return 0;
}
