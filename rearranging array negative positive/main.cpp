#include <bits\stdc++.h>

using namespace std;

void swap_fxn(int& a, int& b) {
    int  temp;
    temp = a;
    a = b;
    b = temp;
}

void rearrange_array(int arr[], int n) {
    int i = -1;
    for (int j = 0; j < n; j++) {
        if (arr[j] < 0) {
            i++;
            swap_fxn(arr[i], arr[j]);
        }
    }
    int positive = i + 1;
    int negative = 0;
    while (positive < n and negative < positive and arr[negative] < 0) {
        swap(arr[negative], arr[positive]);
        positive++;
        negative += 2;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++) {
        cin >> arr[i];
    }
    rearrange_array(arr, n);
    for (int i = 0; i < n;i++) {
        cout << arr[i] << " ";
    }

}