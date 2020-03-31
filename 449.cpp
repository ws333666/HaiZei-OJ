/*************************************************************************
    > File Name: 449.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月08日 星期三 19时38分22秒
 ************************************************************************/

#include<iostream>
using namespace std;
 
int main() {
	int n, i, j, a[100];
	cin >> n;
	cout << "1" << endl;
	a[1] = a[2] = 1;
	if (n - 1) cout << a[1] << " " << a[2] << endl;
	for (int i = 3; i <= n; i++) {
		a[1] = a[i] = 1;
		int flag = 0;
		for (int j = i - 1; j > 1; j--) a[j] = a[j] + a[j - 1];
		for (int j = 1; j <= i; j++) {
			if (flag) cout << " ";
			cout << a[j];
			flag = 1;
		}
		cout << endl;
	}
 
	return 0;
}
