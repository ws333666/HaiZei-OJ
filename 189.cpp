/*************************************************************************
    > File Name: 189.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月05日 星期日 18时22分58秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 1000000 
int a[max_n + 5] = {0};
int b[max_n + 5] = {0};
int n;

int binary_search(int x) {
	int head = 1, tail = n, mid;
	while (head <= tail) {
		mid = (head + tail) >> 1;
		if (a[mid] == x) return mid;
		else if (a[mid] < x) head = mid + 1;
		else tail = mid - 1;
	}
	return 0;
}

int main() {
	int k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= k; i++) {
		cin >> b[i];
	}
	int flag = 0;
	for (int i = 1; i <= k; i++) {
		int temp = binary_search(b[i]);
		if (flag) cout << " ";
		cout << temp;
		flag = 1;
	}
	cout << endl;
	return 0;
}
