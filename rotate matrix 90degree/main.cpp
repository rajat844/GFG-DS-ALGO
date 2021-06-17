#include <iostream>
#include <vector>

using namespace std;

void rotatevector(vector<vector<int>>& arr, int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 1;j++) {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for (int i = 0; i < n;i++) {
        for (int j = 0; j < n / 2;j++) {
            temp = arr[i][j];
            arr[i][j] = arr[i][n - j - 1];
            arr[i][n - j - 1] = temp;
        }
    }
}


int main() {
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n;j++)
            cin >> arr[i][j];
    rotatevector(arr, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n;j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}