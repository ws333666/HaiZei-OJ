/*************************************************************************
    > File Name: 214.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月05日 星期日 19时40分19秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	int n, m, num[35];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	cin >> m;
	sort(num, num + n);
	int sum = 0, a = m;
	for (int i = n - 1; i >= 0; i--) {
		sum += num[i];
		a--;
		if (!a) break;
	}
	printf("%.2f\n", 1.0 * sum / m);
	return 0;
}
