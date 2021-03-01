#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void swap(int* p, int* q) {
        int temp = *p;
        *p = *q;
        *q = temp;
    }
    void sort012(int a[], int n)
    {
        int low{ 0 }, high{ n - 1 }, mid{ 0 };
        while (mid <= high) {
            if (a[mid] == 0) {
                swap(&a[mid], &a[low]);
                low++;
                mid++;
            }
            if (a[mid] == 1) {
                mid++;
            }
            if (a[mid] == 2) {
                swap(&a[mid], &a[high]);
                high--;
            }
        }
    }

};

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0;i < n;i++) {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0;i < n;i++) {
            cout << a[i] << " ";
        }

        cout << endl;


    }
    return 0;
}