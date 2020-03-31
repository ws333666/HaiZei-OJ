/*************************************************************************
    > File Name: 201.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月05日 星期日 19时07分48秒
 ************************************************************************/

#include<iostream>
using namespace std;
 
int main() {
	int n, a[1005] = {0}, cnt;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (!a[temp]) {
			a[temp] = 1;
			cnt += 1;
		}
	}
	cout << cnt << endl;
	int flag = 0;
	for (int i = 0; i < 1005; i++) {
		if (!a[i]) continue;
		if (flag) cout << " ";
		cout << i;
		flag = 1;
	}
	cout << endl;
	return 0;
}
