/*************************************************************************
    > File Name: 167.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月14日 星期六 09时57分15秒
 ************************************************************************/

#include <iostream>
#include <string>  

using namespace std;
int main() {
	string a, b;
	int n;
	cin >> a >> n >> b;
	cout << a.size() << endl;
	for (int i = 0, j = 1; i < a.size(); i++, j++) {
		if (a[i] == 'a') {
			cout << j << endl;
			break;
		}
	}
	a = a.insert(n - 1, b);
	cout << a << endl;
	return 0;
}
