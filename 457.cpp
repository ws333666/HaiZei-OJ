/*************************************************************************
    > File Name: 457.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月07日 星期五 15时11分56秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;
 
int main() {
	int n, num[1005] = {0};
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> num[i];
	}
	int f[1005] = {0};
	for (int i = 1; i < n; i++) {
		int temp = abs(num[i] - num[i + 1]);
		f[temp] = 1;
	} 
	int flag = 1;
	for (int i = 1; i < n; i++) {
		if (f[i] == 0) flag = 0;
	}
	cout << (flag ? "Jolly" : "Not jolly") << endl;
	return 0;
}
