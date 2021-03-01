#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i{ 0 };i < n;i++) {
		cin >> a[i];
	}
	int low = 0;
	for (int i = 0;i < n;i++) {
		if (a[i] < 0) {
			if (i != low)
				swap(a[i], a[low]);
			low++;
		}
	}
	for (int i{ 0 };i < n;i++) {
		cout << a[i] << " ";
	}
	return 0;
}