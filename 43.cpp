/*************************************************************************
    > File Name: 43.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月28日 星期六 18时06分47秒
 ************************************************************************/

#include <iostream>
  
using namespace std;
#define max_n 1000

int ans[max_n +5][max_n + 5] = {0};
int keep[max_n +5][max_n + 5] = {0};

int dfs(int i, int j, int n) {
	if (i + 1 == n) return ans[i][j];
	if (keep[i][j]) return keep[i][j];
	int ans1 = dfs(i + 1, j, n);
	int ans2 = dfs(i + 1, j + 1, n);
	return keep[i][j] = (ans1 > ans2 ? ans1 : ans2) + ans[i][j];
}


int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> ans[i][j];
		}
	}
	cout << dfs(0, 0, n) << endl;
	return 0;
}
