/*************************************************************************
	> File Name: 47.cpp
	> Author: wangshuai
	> Mail: ws1519704327@126.com
	> Created Time: 2020年04月22日 星期三 19时39分59秒
 ************************************************************************/

#include <iostream>
using namespace std;
 
int all, n, w[105], v[105], ans[10005];

int main() {
    cin >> all >> n;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = all; j > 0; j--) {
            if (j < w[i]) {
                break;
            } else {
                ans[j] = max(ans[j], v[i] + ans[j - w[i]]);
            }
        }
    }
    cout << ans[all] << endl;
    return 0;
}
