/*************************************************************************
    > File Name: 166.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月14日 星期六 09时48分05秒
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string a, b;
	int c;
	cin >> a >> c >> b;
	if (a.size() > 100) {
		cout << 100 << endl;
	} else {
		cout << a.size() << endl;
	}
	a = a.insert(c - 1, b);
	cout << a << endl;
	for (int i = a.size(), j = 0; i >= 0; i--, j++) {
		if (a[i] == 'x') {
			cout << j << endl;
			break;
		}
	}
	return 0;
}
