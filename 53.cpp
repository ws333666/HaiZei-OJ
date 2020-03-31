/*************************************************************************
    > File Name: 53.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月08日 星期三 10时57分40秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_m 8000000
#define max_n 1000000

int f[max_m + 5] = {0};

int main() {
	for (int i = 1; i <= max_n; i++) {
		for (int j = 1; i * j <= max_m; j++) {
			f[i * j] += i;
		}
	}
	long long ans = 0;
	for (int i = 2; i <= max_n; i++) {
		if (f[i] < max_m && ans < f[i]) ans = f[i]; 
	}
	cout << ans << endl;
	return 0;
}
