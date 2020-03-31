/*************************************************************************
    > File Name: 205.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月03日 星期五 19时28分12秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
using namespace std;
 
int dir[35][35] = {0};

int main() {
	double n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> dir[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		double ans = 0;
		for (int j = 0; j < m; j++) {
			ans += dir[i][j];
		}
		printf("%.6f", ans / m);
		cout << endl;
	}
	return 0;
}
