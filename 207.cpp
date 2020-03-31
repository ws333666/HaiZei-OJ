/*************************************************************************
    > File Name: 207.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月08日 星期三 15时09分54秒
 ************************************************************************/

#include<iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct student {
	int sum;
	string name;
};

bool cmp(student a, student b) {
	return a.sum > b.sum;
}

int main() {
	student stu[30];
	int n, a = 0, b = 100;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> stu[i].name;
		stu[i].sum = 0;
		for (int j = 0; j < 4; j++) {
			int temp;
			cin >> temp;
			if (a < temp) a = temp;
			if (b > temp) b = temp;
			stu[i].sum += temp;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << stu[i].sum << endl;
	}
	sort(stu, stu + n, cmp);
	cout << stu[0].name << endl;
	cout << a << " " << b << endl;
	return 0;
}
