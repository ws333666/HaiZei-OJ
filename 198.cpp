/*************************************************************************
    > File Name: 198.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月15日 星期日 11时05分10秒
 ************************************************************************/

#include <iostream>

using namespace std;

int main () {
	long long n,num[100005] = {0, 1, 1};
	cin >> n;
	for (int i = 3; i <= n; i++) {
		num[i] = num [i - 1] + num[i - 2];
		num[i] %= 1000000007;
	}
	cout << num[n]  << endl;

	return 0;
}
