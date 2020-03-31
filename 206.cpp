/*************************************************************************
    > File Name: 206.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月03日 星期五 19时43分50秒
 ************************************************************************/

#include<iostream>
using namespace std;
 
double a[35][35] = {0};

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		double ans = 0;
		for (int j = 0; j < n; j++) {
			ans += a[j][i];
		}
		cout << ans << endl;
	}
	return 0;
}
