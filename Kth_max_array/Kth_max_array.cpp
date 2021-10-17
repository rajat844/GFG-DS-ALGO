#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int partition(int arr[], int l, int h) {
        int i = l - 1;
        int pi = l + (rand() % (h - l + 1));
        swap(arr[pi], arr[h]);
        int piv = arr[h];
        for (int j = l; j < h; j++) {
            if (arr[j] < piv) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[h]);
        return i + 1;
    }

    int kthSmallest(int arr[], int l, int r, int k) {
        while (l <= r) {
            int p = partition(arr, l, r);
            if (p == k - 1) return arr[p];
            else if (p > k - 1) {
                r = p - 1;
            }
            else {
                l = p + 1;
            }
        }
        return -1;
    }
};

int main() {
    int number_of_elements;
    cin >> number_of_elements;
    int a[number_of_elements];

    for (int i = 0;i < number_of_elements;i++)
        cin >> a[i];

    int k;
    cin >> k;
    Solution ob;
    cout << ob.kthSmallest(a, 0, number_of_elements - 1, k) << endl;

    return 0;
}