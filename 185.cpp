/*************************************************************************
    > File Name: 185.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月15日 星期日 10时43分17秒
 ************************************************************************/

#include <iostream>
  
int func(int n) {
	if (n <= 2) return 1;
	else return func(n - 1) + func(n - 2);
}

using namespace std;
int main() {
	int n;
	cin >> n;
	cout << func(n) << endl;
	return 0;
}
