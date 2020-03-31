/*************************************************************************
    > File Name: 170.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月14日 星期六 10时23分52秒
 ************************************************************************/

#include <iostream>
#include <cstring> 
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		while (str.find("Ban_smoking") != -1) {
			int pos = str.find("Ban_smoking");
			str.replace(pos, 11, "No_smoking");
		}
		cout << str << endl;
	}

	return 0;
}
