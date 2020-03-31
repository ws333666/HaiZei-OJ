/*************************************************************************
    > File Name: 462.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月10日 星期五 15时14分57秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
 
struct student {
	char name;
	int age;
	char a[20];
};

int main() {
	int n, m = 0;
	long long sum = 0, nan = 0, nv = 0;
	student stu[10005];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cin >> stu[i].name;
		if (stu[i].name == 'q') {
			cin >> stu[i].age;
			m++;
			sum += stu[i].age;
		}
		else {
			cin >> stu[i].a;
			int len = strlen(stu[i].a);
			if (stu[i].a[len - 2] & 1) nan++;
			else nv++;
		}
	}
	cout << nan << " " << nv << " " << sum / m << endl;
	return 0;
}
