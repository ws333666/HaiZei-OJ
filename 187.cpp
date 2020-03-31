/*************************************************************************
    > File Name: 187.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月15日 星期日 10时56分21秒
 ************************************************************************/

#include <iostream>
  
long long func1(long long n) {
	if (n == 1) return 1;
	return func1(n - 1) * 2 + 1;
}
long long func2(long long n) {
	if (n == 1) return 1;
	return 2 * func2(n - 1) + n;
}

using namespace std;
int main() {
	long long n;
	cin >> n;
	cout << func1(n)  << " " << func2(n) << endl;

	return 0;
}
