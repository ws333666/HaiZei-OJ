/*************************************************************************
    > File Name: 458.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月09日 星期四 19时12分26秒
 ************************************************************************/

#include<iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct student {
	string name, age;
	int y, m;
};

bool cmp(student a, student b) {
	if (a.y == b.y) {
		return a.m > b.m;
	}
	return a.y > b.y;
}

int main() {
	int n;
	cin >> n;
	student stu[105];
	for (int i = 0; i < n; i++) {
		cin >> stu[i].name;
		cin >> stu[i].age;
		cin >> stu[i].y;
		cin >> stu[i].m;
	}
	sort(stu, stu + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << stu[i].name << " ";
		cout << stu[i].age << " ";
		cout << stu[i].y << " ";
		cout << stu[i].m;
		cout << endl;
	}
	return 0;
}
