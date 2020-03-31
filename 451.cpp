/*************************************************************************
    > File Name: 451.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月09日 星期四 11时26分41秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;
#define max_n 100000

int num[max_n + 5] = {0};

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num, num + n);
	for (int i = 0; i < n; i++) {
		cout << num[i] << endl;
	}
	return 0;
}
