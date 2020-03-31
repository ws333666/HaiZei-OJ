/*************************************************************************
    > File Name: 459.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月09日 星期四 19时43分03秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
 
int main() {
	string name, sex; 
	int age;
	double z;
	cin >> name >> sex >> age >> z;
	cout << name << " " << sex << " " << age << " ";
	printf("%.1f", z);
	return 0;
}
