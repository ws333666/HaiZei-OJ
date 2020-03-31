/*************************************************************************
    > File Name: 78.cpp
    > Author: ws
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月10日 星期五 10时56分15秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
#define max_n 1000

char str1[max_n + 5], str2[max_n + 5];
int arr1[max_n + 5] = {0}, arr2[max_n + 5] = {0};

int main() {
	cin >> str1 >> str2;
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	for (int i = 0; i < len1; i++) arr1[i + 1] = str1[len1 - i - 1] - '0';
	for (int i = 0; i < len2; i++) arr2[i + 1] = str2[len2 - i - 1] - '0';
	arr1[0] = (len1 > len2 ? len1 : len2);
	for (int i = 1; i <= arr1[0]; i++) {
		arr1[i] += arr2[i];
		if (arr1[i] < 10) continue;
		arr1[i + 1] += arr1[i] / 10;
		arr1[i] %= 10;
		arr1[0] += (i == arr1[0]);
	}
	for (int i = arr1[0]; i >= 1; i--) {
		cout << arr1[i];
	}
	cout << endl;
	return 0;
}
