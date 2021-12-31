#include <bits/stdc++.h>

using namespace std;



int search(vector<int>& arr, int target) {
    int n = arr.size();
    int l = 0, h = n - 1, mid;

    while (l < h) {
        mid = l + (h - l) / 2;
        if (arr[mid] > arr[h]) l = mid + 1;
        h = mid;
    }
    int pivot = l;

    if (target <= arr[n - 1]) {
        l = pivot + 1;
        h = n - 1;

        while (l <= h) {
            mid = l + (h - l) / 2;
            if (target == arr[mid]) return mid;
            if (arr[mid] > target) h = mid - 1;
            else l = mid + 1;
        }
    }
    else {
        l = 0;
        h = pivot;
        while (l <= h) {
            mid = l + (h - l) / 2;
            if (target == arr[mid]) return mid;
            if (arr[mid] > target) h = mid - 1;
            else l = mid + 1;
        }
    }
    return -1;

}


int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << search(arr, k);

    return 0;
}