/*************************************************************************
    > File Name: 192.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年02月07日 星期五 09时46分46秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;
 
double f(double x) {
	return x * exp(x);
}

int main() {
	double a;
	cin >> a;
	double l = 0, r = 30;
	while (r - l > 0.000001) {
		double mid = (l + r) / 2;
		if (f(mid) > a) r = mid;
		else l = mid;
	}
	printf("%.4f\n", l);
	return 0;
}
