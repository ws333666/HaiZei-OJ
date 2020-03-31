/*************************************************************************
    > File Name: 181.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月14日 星期六 10时57分06秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 'a' - 'A';
		} else {
			str[i] += 'a' - 'A';
		}
	}
	cout << str << endl;
	return 0;
}
