/*************************************************************************
    > File Name: 450.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月09日 星期四 18时15分49秒
 ************************************************************************/

#include<iostream>
#include <algorithm>
using namespace std;
 
int num[105] = {0};

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num, num + n);
	for (int i = 0; i < n; i++) {
		if (i) cout << " ";
		cout << num[i];
	}
	cout << endl;
	return 0;
}
