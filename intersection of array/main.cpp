#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector <int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3) {
        //code here.
        set<int> s;
        vector<int> ans;
        int i = 0, j = 0, k = 0;
        while (i < n1 and j < n2 and k < n3) {
            if (A[i] == B[j] and B[j] == C[k]) {
                if (s.find(A[i]) == s.end())
                    ans.push_back(A[i]);
                s.insert(A[i]);
                i++, j++, k++;
            }
            else {
                if (A[i] > B[j])
                    j++;
                else if (B[j] > C[k])
                    k++;
                else
                    i++;
            }
        }
        return ans;
    }
};


int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int A[n1];
    int B[n2];
    int C[n3];

    for (int i = 0; i < n1; i++) cin >> A[i];
    for (int i = 0; i < n2; i++) cin >> B[i];
    for (int i = 0; i < n3; i++) cin >> C[i];

    Solution ob;

    vector <int> res = ob.commonElements(A, B, C, n1, n2, n3);
    if (res.size() == 0)
        cout << -1;
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    cout << endl;
}