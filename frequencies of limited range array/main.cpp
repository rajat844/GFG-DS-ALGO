#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr, int N, int P) {
        // code here
        for (int i = 0; i < N;i++) {
            arr[i] -= 1;
        }
        sort(arr.begin(), arr.end());
        int index = N;
        for (int i = 0; i < N;i++) {
            if (arr[i] >= N) {
                arr[i] = 0;
                if (index == N) {
                    index = i;
                }
            }
        }
        for (int i = 0; i < index; i++) {
            arr[arr[i] % N] += N;
        }
        for (int i = 0; i < N;i++) {
            arr[i] = arr[i] / N;
        }
    }
};


// { Driver Code Starts.

int main() {
    int N, P;
    cin >> N;

    vector<int> arr(N);
    //adding elements to the vector
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    cin >> P;
    Solution ob;
    //calling frequncycount() function
    ob.frequencyCount(arr, N, P);

    //printing array elements
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}




// } Driver Code Ends