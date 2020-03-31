/*************************************************************************
    > File Name: 174.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月08日 星期三 14时53分17秒
 ************************************************************************/

#include<iostream>
using namespace std;

char s[1000005] = {0};
char a[3000005] = {0};

int main() {
	gets(s);
	for (int i = 0, j = 0; s[i]; i++) {
		if (s[i] != ' ') {
			a[j] = s[i];
			j++;
		} else {
			a[j] = '%';
			a[j + 1] = '2';
			a[j + 2] = '0';
			j += 3;
		}
	}
	cout << a << endl;
	return 0;
}
