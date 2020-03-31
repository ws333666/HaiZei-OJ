/*************************************************************************
    > File Name: 193.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月05日 星期日 15时58分49秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 100000 

int a[max_n + 5] = {0};

int binary_search(int *func, int n, int x) {
	int head = 1, tail = n, mid;
	while (head <= tail) {
		mid = (head + tail) >> 1;
		if (func[mid] == x) return mid;
		else if (func[mid] < x) head = mid + 1;
		else tail = mid - 1;
	}
	return 0;
}


int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int x, s;
	cin >> x >> s;
	int flag = 1;
	flag = flag && binary_search(a, n, s - x);
	if (flag) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
