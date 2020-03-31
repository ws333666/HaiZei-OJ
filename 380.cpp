/*************************************************************************
    > File Name: 380.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年03月06日 星期五 16时08分29秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <map>
using namespace std;
 
bool cmp(string a, string b) {
	if (a.size() == b.size()) return a > b;
	return a.size() > b.size();
}

int main() {
	int n;
	string s[105];
	map<string, int> ma;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s[i];
		ma[s[i]] = i;
	}
	sort(s + 1, s + n + 1, cmp);
	cout << ma[s[1]] << endl << s[1] << endl;
	return 0;
}
