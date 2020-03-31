/*************************************************************************
    > File Name: 43-1.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月28日 星期六 18时23分31秒
 ************************************************************************/

#include <iostream>
  
using namespace std;
#define max_n 1000

int val[max_n][max_n] = {0};

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> val[i][j];
		}
	}
	for (int i = n - 2; i >= 0; i--) {
		for (int j = 0; j <= i; j++) {
			val[i][j] += max(val[i + 1][j], val[i + 1][j + 1]);
		}
	}
	cout << val[0][0] << endl;
	return 0;
}
