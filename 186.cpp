/*************************************************************************
    > File Name: 186.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月14日 星期六 11时01分16秒
 ************************************************************************/

#include <iostream>
  
using namespace std;

int n, num[100005];

int ans(int x, int p) {
	if (p >= n) return x - 1;
	return ans(x + 1, p + num[p]);
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	cout << ans(1, 0) << endl;
	return 0;
}
