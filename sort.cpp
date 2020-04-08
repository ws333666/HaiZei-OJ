/*************************************************************************
	> File Name: tese.cpp
	> Author: wangshuai
	> Mail: ws1519704327@126.com
	> Created Time: 2020年04月08日 星期三 19时37分02秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
 
struct node {
    int x, y;
};

bool cmp(node a, node b) {
    if (a.x == b.x) return a.y < b.y;
    return a.x > b.x;
}

int main() {
    node n[200];
    sort(n, n + 20, cmp);
    return 0;
}
