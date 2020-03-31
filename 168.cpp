/*************************************************************************
    > File Name: 168.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月14日 星期六 10时05分51秒
 ************************************************************************/

#include <iostream>
#include <string> 
#include <algorithm>

using namespace std;
int main() {
	int n;
	string a[105];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i][0] >= 'a' && a[i][0] <= 'z') {
			a[i][0] -= 'a' - 'A';
		}
		for (int j = 1; j < a[i].size(); j++) {
			if (a[i][j] >= 'A' && a[i][j] <= 'Z') {
				a[i][j] += 'a' - 'A'; 
			}
		}
	}
	sort (a, a + n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	return 0;
}
