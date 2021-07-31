
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string longestPalin(string s) {
        // code here
        string res = "";
        for (int i = 0; i < s.size();i++) {
            int j = i;
            string ans = "";
            while (j < s.size() and s[j] == s[i]) {
                ans += s[j];
                j++;
            }
            int k = i - 1;
            while (k >= 0 and j < s.size() and s[k] == s[j]) {
                ans = s[k] + ans + s[k];
                j++;
                k--;
            }
            if (ans.size() > res.size())
                res = ans;
        }
        return res;
    }
};

int main() {

    string S; cin >> S;

    Solution ob;
    cout << ob.longestPalin(S) << endl;

}