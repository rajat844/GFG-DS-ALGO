#include <bits/stdc++.h>

using namespace std;

void heapify(vector<int>& arr, int i, int size) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < size and arr[largest] < arr[left]) {
        largest = left;
    }
    if (right < size and arr[largest] < arr[right]) {
        largest = right;
    }
    if (largest != i) {
        swap(arr[largest], arr[i]);
        heapify(arr, largest, size);
    }
}
vector<int> heapSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2;i >= 0;i--)
        heapify(arr, i, n);

    for (int j = n - 1;j > 0;j--) {
        swap(arr[j], arr[0]);
        heapify(arr, 0, j);
    }
    return arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n;i++) {
        cin >> arr[i];
    }
    arr = heapSort(arr);
    for (auto i : arr) {
        cout << i;
    }

    return 0;
}