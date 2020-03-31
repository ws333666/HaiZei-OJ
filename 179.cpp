/*************************************************************************
    > File Name: 179.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月15日 星期日 11时43分12秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <cstdio>
#define M 1e-6
using namespace std;

int p, q;

double f(double x) {
	return p * x + q;
}

int main() {
	cin >> p >> q; 
	double l = -20, r = 20;
	while (fabs(l - r) > M) {
		double min = (l + r) / 2;
		if (f(l) * f(min) > 0) {
			l = min;
		} else {
			r = min;
		}
	}
	printf("%.4f\n", l);
	return 0;
}
