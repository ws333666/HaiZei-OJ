/*************************************************************************
    > File Name: 445.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月07日 星期五 10时23分43秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
 
int main() {
	int n, num[1005] = {0};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	int flag = 0;
	for (int i = 0; i < n; i++) {
		int flag1 = 0, flag2 = 0;
		for (int j = 0; j < i; j++) {
			if (num[j] > num[i]) flag1++;
		}
		for (int k = i + 1; k < n; k++) {
			if (num[k] > num[i]) flag2++;
		}
		if (flag1 == flag2) flag++;
	}
	cout << flag << endl;
	return 0;
}
