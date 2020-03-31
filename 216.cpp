/*************************************************************************
    > File Name: 216.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月08日 星期三 18时16分31秒
 ************************************************************************/

#include<iostream>
#include <cstring>
#include <algorithm>
using namespace std;
 
int main() {
	int n;
	string name[105];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name[i];
		name[i] = name[i].substr(3);
	}
	sort(name, name + n);
	for (int i = 0; i < n; i++) {
		cout << name[i] << endl;
	}
	return 0;
}
