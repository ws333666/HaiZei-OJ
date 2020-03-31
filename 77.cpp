/*************************************************************************
    > File Name: 77.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月05日 星期日 14时59分27秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 1000

int a[max_n + 5];

int main() {
	a[0] =a[1] = 1;
	long long m, n;
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= a[0]; j++) a[j] *= m;
		for (int k = 1; k <= a[0]; k++) {
			if (a[k] < 10) continue;
			a[k + 1] += a[k] / 10;
			a[k] %= 10;
			a[0] += (k == a[0]);
		}
	}
	for (int i = a[0]; i >= 1; i--) {
		cout << a[i];
	}
	cout << endl;
	return 0;
}
