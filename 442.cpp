/*************************************************************************
    > File Name: 442.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月07日 星期五 17时57分25秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
 
int main() {
	int n;
	cin >> n;
	int num[35];
	num[0] = 0, num[1] = 1, num[2] = 2;
	for (int i = 3; i <= n; i++) {
		num[i] = num[i - 1] + num[i - 2];
	}
	for (int i = 1; i <= n; i++) {
		if (i > 1) cout << " ";
		cout << num[i];
	}
	cout << endl;
	return 0;
}
