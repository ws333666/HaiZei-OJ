/*************************************************************************
    > File Name: 178.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月09日 星期四 09时13分27秒
 ************************************************************************/

#include<iostream>
#include <cstring>
using namespace std;
#define max_n 5000000
char s[max_n + 5] = {'A'};

int main() {
	int n;
	cin >> n;
	for (int i = 1; i < n; i++) {
		int l = strlen(s);
		for (int j = 0; j < l; j++) {
			s[2 * l - j] = s[j];
		}
		s[l] = 'A' + i;
	}
	cout << s << endl;
	return 0;
}
