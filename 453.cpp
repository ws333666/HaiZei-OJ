/*************************************************************************
    > File Name: 453.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月09日 星期四 11时41分46秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 30000

int num[max_n + 5] = {0};

int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		num[temp] += 1;
	}
	int ans = 0;
	for (int i = 0; i <= max_n; i++) {
		if (!num[i]) continue;
		ans++;
		if (ans == k) {
			cout << i << endl;
			break;
		}
	}
	return 0;
}
