/*************************************************************************
    > File Name: 194.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月05日 星期日 16时15分56秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 100000

int arr[max_n + 5] = {0};

int binary_search(int n, int x) {
	int head = 0, tail = n, mid;
	while (head <= tail) {
		mid = (head + tail) >> 1;
		if (arr[mid] == x) return 1;
		else if (arr[mid] < x) head = mid + 1;
		else tail = mid - 1;
	}
	return 0;
}


int main() {
	int n, s, flag = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> s;
	for (int i = 0; i < n; i++) {
		int ans = s - arr[i];
		flag = binary_search(n - 1, ans);
		if (flag && arr[i] - ans) cout << "Yes" << endl; break;
	}
	if (!flag) cout << "No" << endl;
	return 0;
}
