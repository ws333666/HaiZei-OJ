/*************************************************************************
    > File Name: 534.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年03月18日 星期三 20时25分23秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
 
int n, num[25], check[1005] = {1}, ans;

void func(int s, int sum) {
	if (check[sum] == 0) {
		ans++;
		check[sum] = 1;
	}
	for (int i = s; i <= n; i++) {
		sum += num[i];
		func(i + 1, sum);
		sum -= num[i];
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	func(0, 0);
	cout << ans << endl;
	return 0;
}
