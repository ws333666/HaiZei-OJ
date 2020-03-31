/*************************************************************************
    > File Name: 215.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月08日 星期三 14时59分00秒
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
	student stu[50];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> stu[i].name;
		stu[i].sum = 0;
		for (int j = 0; j < 4; j++) {
			int temp;
			cin >> temp;
			stu[i].sum += temp;
		}
	}
	sort(stu, stu + n, cmp);
	for (int i = 0; i < 3; i++) {
		cout << stu[i].name << endl;
	}
	return 0;
}
