/*************************************************************************
    > File Name: 1.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月08日 星期三 20时58分39秒
 ************************************************************************/

#include<iostream>
using namespace std;
 
int main() {
	int n, num[105] = {0};
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> num[temp];
		num[temp] += 1
	}
	int ans = 0;
	for (int i = 100; i >= 0; i--) {
		ans += num[i];
		if (ans * 2 > n) {
			cout << i << " " << ans << endl;
			break;
		}
	}
	return 0;
}
