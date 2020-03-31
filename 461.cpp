/*************************************************************************
    > File Name: 461.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月10日 星期五 14时06分59秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;

char a[10000];

int main() {
	int n, sum = 0, ans1 = 0, ans2 = 0;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 'C') {
			cin >> str;
			ans1++;
		} else if (a[i] == 'N') {
			int temp;
			cin >> temp;
			ans2++;
			sum += temp;
		}
	}
	cout << ans1 << " " << sum / ans2;
	return 0;
}
