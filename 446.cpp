/*************************************************************************
    > File Name: 446.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月04日 星期六 20时21分52秒
 ************************************************************************/

#include<iostream>
using namespace std;

int a[10][10];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= (n + 1) / 2; i++) {
		for (int j = i; j <= n + 1 - i; j++) {
			for (int k = i; k <= n + 1 - i; k++) {
				a[j][k] = i;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j > 1) cout << " ";
			cout << a[i][j];
		}
		cout << endl;
	}
 
	return 0;
}
