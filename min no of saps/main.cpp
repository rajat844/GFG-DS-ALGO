#include <iostream>
using namespace std;


int minSwap(int* arr, int n, int k);

// Driver code
int main() {
    int n;
    int k;
    cin >> n;
    int arr[n];
    for (int i = 0;i < n;i++)
        cin >> arr[i];
    cin >> k;
    cout << minSwap(arr, n, k) << "\n";

    return 0;
}
// } Driver Code Ends


int minSwap(int* arr, int n, int k) {
    // Complet the function
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= k) {
            count++;
        }
    }
    if (count == 1 || count == n)
        return  0;
    int res = 0;
    int curr_count = 0;
    for (int i = 0; i < count; i++) {
        if (arr[i] > k) {
            curr_count++;
        }
    }
    res = curr_count;
    for (int i = count; i < n; i++) {
        if (arr[i - count] > k) {
            curr_count--;
        }
        if (arr[i] > k)
            curr_count++;
        res = min(res, curr_count);
    }
    return res;

}