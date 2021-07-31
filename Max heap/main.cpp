#include <bits/stdc++.h>

using namespace std;

void maxheap(int i, vector<int>& a) {
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int max = i;
    if (left < a.size() and a[max] < a[left])
        max = left;
    if (right < a.size() and a[max] < a[right])
        max = right;
    if (i != max) {
        swap(a[i], a[max]);
        maxheap(max, a);
    }

}

void heapify(vector<int>& a, int n) {
    for (int i = n / 2; i >= 0; i--) {
        maxheap(i, a);
    }
}



int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n;i++) {
        int x;
        cin >> x;
        a[i] = x;
    }
    heapify(a, n);

    for (auto i : a) {
        cout << i << " ";
    }

    return 0;
}