/*************************************************************************
    > File Name: 141.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月13日 星期五 19时45分57秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = i; j <= n; j++) {
			cout << (char)('A' + j);
		}
		for (int j = n - 1; j >= i; j--) {
			cout << (char)('A'+ j);
		}
		cout << endl;
	}
	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = i; j <= n; j++) {
			cout << (char)('A' + j);
		}
		for (int j = n - 1; j >= i; j--) {
			cout << (char)('A'+ j);
		}
		cout << endl;
	}
	return 0;
}
