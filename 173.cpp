/*************************************************************************
    > File Name: 173.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月14日 星期六 10时40分16秒
 ************************************************************************/

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	char str[10000] = {0};
	gets(str);
	int zm = 0, num = 0, spa = 0, oth = 0;
	for (int i = 0; str[i] != 0; i++) {
		if (str[i] >= 'a' && str[i] <= 'z' ||
			str[i] >= 'A' && str[i] <= 'Z') {
			zm++;
		} else if (str[i] >= '0' && str[i] <= '9') {
			num++;
		} else if (str[i] == ' ') {
			spa++;
		} else {
			oth++;
		}
	}
	cout << zm << " " << num << " " << spa << " " << oth << endl;
	return 0;
}
