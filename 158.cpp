/*************************************************************************
    > File Name: 158.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月13日 星期五 21时02分11秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		cout << (n - i);
		for (int j = 0; j < 2 * (n - i) - 1; j++) {
			cout << " ";
		}
		cout << (n - i) << endl;
	}
	for (int i = 0; i < n; i++) {
		cout << " ";
	}
	cout << 0 << endl;
	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		cout << (n - i);
		for (int j = 0; j < 2 * (n - i) - 1; j++) {
			cout << " ";
		}
		cout << (n - i) << endl;
	}
	return 0;
}
