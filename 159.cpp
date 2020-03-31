/*************************************************************************
    > File Name: 159.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月13日 星期五 21时23分14秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main() {
	char a;
	cin >> a;
	int n = (int)(a - 'A') + 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = (n - i - 1); j >= 0; j--) {
			cout << (char)('A' + j);
		}
		for (int j = 0; j < (n - i - 1); j++) {
			cout << (char)('A' + j);
		}
		cout << endl;
	}

	return 0;
}
