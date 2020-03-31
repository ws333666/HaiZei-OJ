/*************************************************************************
    > File Name: 177.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月08日 星期三 18时21分34秒
 ************************************************************************/

#include<iostream>
#include <cstring>
using namespace std;
 
int main() {
	char s[30];
	cin >> s;
	int a = 0;
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			cout << s[a];
			a++;
			a %= len;
		}
		cout << endl;
		a += len - 2;
		a %= len;
	}
	return 0;
}
