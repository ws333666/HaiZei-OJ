/*************************************************************************
    > File Name: EP19.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月11日 星期六 10时46分13秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <cinttypes>
using namespace std;

int whichday(int y, int m, int d) {
	if (m == 1 || m == 2) {
		--y; m += 12;
	}
	int w;
	w = (d + 2 * m + 3 * (m  + 1) / 5 + y + y / 4 
		 - y / 100 + y / 400) % 7;
	return w;
}
	
int main() {
	int Saturday = 0;
	int y1, y2, m1, m2, d1,d2;
	cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
	int Y1 = (y1 > 1900 ? y1 : 1900);
	int Y2 = (y2 < 2018 ? y2 : 2018);
	for (int y = Y1 + 1; y <= Y2 - 1; ++y) {
		if (whichday(y, 6, 6) == 5) Saturday++;
	}
	if (m1 < 6) if (whichday(y1, 6, 6) == 5) Saturday++;
	if (m2 > 6) if (whichday(y2, 6, 6) == 5) Saturday++;
	cout << Saturday << endl;
	return 0;
}
