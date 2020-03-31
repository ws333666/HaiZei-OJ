/*************************************************************************
    > File Name: 443.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月03日 星期五 18时31分35秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 10000

int func[max_n + 5] = {0};

int main() {
	int l, m, a, b;
	int ans = 0;
	cin >> l >> m;
	for (int i = 0; i < m; i++){
		cin >> a >> b;
		for (int j = a; j <= b; j++) {
			func[j] = 1;
		}
	}
	for (int i = 0; i <= l; i++){
		if (!func[i]) ans += 1;
	}
	cout << ans << endl;
	return 0;
}
