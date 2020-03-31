/*************************************************************************
    > File Name: 169.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月14日 星期六 10时17分40秒
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, num[128] = {0};
	cin >> n;
	for (int i = 0; i < n; i++) {
		char a;
		int b;
		cin >> a >> b;
		num[(int)a] = b;
	}
	string k;
	int ans = 0;
	cin >> k;
	for (int i = 0; i < k.size(); i++) {
		ans += num[(int)k[i]];
	}
	cout << ans << endl;
	return 0;
}
