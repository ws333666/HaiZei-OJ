/*************************************************************************
    > File Name: 456.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月09日 星期四 18时42分43秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 1000000

int num[max_n + 5] = {0};

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		num[temp] += 1;
	}
	for (int i = 0; i <= max_n; i++) {
		if (num[i] & 1) {
			cout << i;
			break;
		}
	}
	return 0;
}
