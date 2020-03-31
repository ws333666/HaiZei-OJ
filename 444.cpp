/*************************************************************************
    > File Name: 444.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月09日 星期四 15时27分25秒
 ************************************************************************/

#include<iostream>
using namespace std;

int num[105] = {0};
int ans[105] = {0};

int main() {
	int n, x;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> num[i];
		ans[i] = num[i];
	}
	cin >> x;
	int flag = 0;
	for (int i = 1; i <= n; i++) {
		if (i == x) {
			num[i] = ans[n];
			flag = 1;
		}
		if (flag) num[i + 1] = ans[i];
	}
	for (int i = 1; i <= n; i++) {
		if (i > 1) cout << " ";
		cout << num[i];
	}
	cout << endl;
	return 0;
}
