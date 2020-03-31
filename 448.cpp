/*************************************************************************
    > File Name: 448.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月03日 星期五 18时19分01秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 100

int func[max_n + 5] = {0};

int main() {
	int n, num, ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> func[i];
	}
	cin >> num;
	for (int i = 0; func[i]; i++) {
		ans += 1;
		if (num == func[i]) break;
	}
	cout << ans << endl;
	return 0;
}
