/*************************************************************************
    > File Name: 199.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月08日 星期三 16时43分09秒
 ************************************************************************/

#include<iostream>
using namespace std;

long long num[1000005] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int a[11];

int f(int x) {
	return a[1] * num[x - 1] + a[2] * num[x - 2] + 
		   a[3] * num[x - 3] + a[4] * num[x - 4] + 
		   a[5] * num[x - 5] + a[6] * num[x - 6] + 
		   a[7] * num[x - 7] + a[8] * num[x - 8] + 
		   a[9] * num[x - 9] + a[10] * num[x - 10];
}


int main() {
	int k, m;
	cin >> k >> m;
	for (int i = 1; i <= 10; i++) {
		cin >> a[i];
	}
	for (int i = 10; i <= k; i++) {
		num[i] =f(i) % m;
	}
	cout << num[k] << endl;
	return 0;
}
