/*************************************************************************
    > File Name: 452.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月07日 星期五 12时59分33秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int n, num[10005] = {0};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	int flag = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (num[j] > num[j + 1]) {
				swap(&num[j], &num[j + 1]);
				flag++;
			}
		}
	}
	cout << flag << endl;
	return 0;
}
