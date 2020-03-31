/*************************************************************************
    > File Name: 235.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年03月11日 星期三 18时56分43秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
 
int n, num[15], cnt;

void p() {
	for (int i = 0; i < cnt; i++) {
		i && cout << " ";
		cout << num[i];
	}
	cout << endl;
}

void func(int s) {
	for (int i = s; i <= n; i++) {
		num[cnt] = i;
		cnt++;
		p();
		func(i + 1);
		cnt--;
	}
}


int main() {
	cin >> n;
	func(1);
	return 0;
}


